
function preventReload(event) {
	event.preventDefault();
}

function closeModal(obj) {
	obj.close();
	// obj.classList.add("dialog-close");
	// obj.addEventListener(
	// 	'onAnimationEnd',
	// 	(event) => {
	// 		obj.classList.remove('dialog-close');
	// 		obj.close();
	// 	}
	// )
}