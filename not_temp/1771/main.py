


import matplotlib.pyplot as plt
import numpy as np

# plt.style.use('seaborn-poster')
# %matplotlib inline

def FFT(x):
    """
    A recursive implementation of 
    the 1D Cooley-Tukey FFT, the 
    input should have a length of 
    power of 2. 
    """
    N = len(x)
    
    if N == 1:
        return x
    else:
        X_even = FFT(x[::2])
        X_odd = FFT(x[1::2])
        factor = \
          np.exp(-2j*np.pi*np.arange(N)/ N)
        
        X = np.concatenate(\
            [X_even+factor[:int(N/2)]*X_odd,
             X_even+factor[int(N/2):]*X_odd])
        return X
# sampling rate
sr = 4096
# sampling interval
ts = 1.0/sr
t = np.arange(0,1,ts)

freq = 50.
knee = 10.0
@np.vectorize
def f(x):
    return np.sin(2. * np.pi * x)
@np.vectorize
def overdrive(x):
    return 1. / (1. + np.exp(-x*knee))
x = overdrive(f(freq*t))

# FREQ MODE


# WAVE MODE
# plt.figure(figsize = (8, 6))
# plt.plot(t, x, 'r')
# plt.ylabel('Amplitude')

# plt.show()

X=FFT(x)

# calculate the frequency
N = len(X)
n = np.arange(N)
T = N/sr
freq = n/T 

fig, (A, B, C) = plt.subplots(ncols=3)
A.stem(freq, abs(X), 'b', \
         markerfmt=" ", basefmt="-b")
A.set(xlabel='Freq (Hz)', ylabel='FFT Amplitude |X(freq)|')

# Get the one-sided specturm
n_oneside = N//2
# get the one side frequency
f_oneside = freq[:n_oneside]

# normalize the amplitude
X_oneside =X[:n_oneside]/n_oneside

B.stem(f_oneside, abs(X_oneside), 'b', \
         markerfmt=" ", basefmt="-b")
B.set(xlabel='Freq (Hz)', ylabel='Normalized FFT Amplitude |X(freq)|')


C.plot(t, x, 'r')
C.set(ylabel='Amplitude')

plt.show()




