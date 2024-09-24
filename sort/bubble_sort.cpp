//bubble_sort
template<typename T> void bubble_sort(T *array, int array_size) {
	T temp;
	for (int i = 0; i < array_size; i++) {
		for (int j = 1; j < array_size - i; j++) {
			if (array[j - 1] > array[j]) {
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}