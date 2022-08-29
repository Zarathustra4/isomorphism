void swap(int* arr, int index_1, int index_2) {
	int temp = arr[index_1];
	arr[index_1] = arr[index_2];
	arr[index_2] = arr[index_1];
}