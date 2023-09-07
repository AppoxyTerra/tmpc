

from dataclasses import dataclass
from threading import Thread, Lock
import time
from typing import Any, Tuple
from random import randint

def timeit(*args, name: str = None, repeats = 1, expected_output = None):
	def deco(f):
		nonlocal name
		if name == None:
			name = f.__name__
		t = time.perf_counter()
		for _ in range(repeats):
			out = f(*args)
			if expected_output != None and expected_output(out):
				print(f"\033[1;31m[FAIL] ({_}/{repeats}) * {name} =>\033[0m{out}")
				return
		print(f"\033[1;32m[OK] {repeats} * {name} : {time.perf_counter()-t}s\033[0m")
	return deco

class Mutex:
	def __init__(self, value):
		self.value = value
		self.lock = Lock()
_scss_input_list = None
_scss_output_list = Mutex(None)
_scss_workers: Tuple[list[Thread, float]] = []
_scss_stop_workers_msg = False
def scss_init(max_count):
	"""Spawn workers"""
	global _scss_workers
	_scss_workers = tuple(
		[
			Thread(target = _scss_sorter, args=(i,)),
			-1.0
		]
		for i in range(max_count)
	)
	for n,worker in enumerate(_scss_workers):
		print(f"Starting worker {n}...")
		worker[0].start()
	print(f"Successfuly started {max_count} scss workers.")
def _scss_sorter(index):
	global _scss_finished
	while not _scss_stop_workers_msg:
		if _scss_input_list != None and _scss_workers[index][1] > 0.0:
			time.sleep(_scss_workers[index][1])
			with _scss_output_list.lock:
				_scss_output_list.value.append(_scss_input_list[index])
				print(f"Thread {index} pushed {_scss_input_list[index]}.")
			_scss_workers[index][1] = 0.0
def scss_quit():
	global _scss_stop_workers_msg
	print("Finishing scss workers...")
	_scss_stop_workers_msg = True
	for n,i in enumerate(_scss_workers):
		i[0].join()
		print(f"Worker {n} stopped.")
	print("Finished scss workers.")
def scss(ls, alloc_time: float = 1.0, launch_error_scaler: float = 0.0):
	global _scss_input_list, _scss_output_list
	m,M = min(ls),max(ls)
	for n,i in enumerate(_scss_workers):
		i[1] = (
			(ls[n]-m)/(M-m) * alloc_time
		+   (launch_error_scaler - n/len(ls) * launch_error_scaler)
		)
	with _scss_output_list.lock:
		_scss_output_list.value = [m] # Worker with minimum won't do anything because their sleep time is 0
	_scss_input_list = ls
	time.sleep(2*alloc_time)
	return _scss_output_list.value

if __name__ == "__main__":
	try:
		scss_init(100) # TODO: MAKE A GPU ADDAPTATION, THAT SHOULD WORK REALLY WELL

		@timeit(repeats=1, expected_output=lambda l: all(l[i] <= l[i+1] for i in range(len(l) - 1)))
		def test1():
			ls = [randint(0, 1000) for _ in range(100)]
			return scss(ls, alloc_time=1)
	except:
		_scss_stop_workers_msg = True
	scss_quit()






