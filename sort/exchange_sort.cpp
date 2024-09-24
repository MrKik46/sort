//exchange_sort
template<typename T> void exchange_sort(T *array, int array_size) {
	T current_element;
	for (int i = 0; i < array_size - 1; i++) {
		current_element = array[i];
		for (int j = i; j < array_size; j++) {
			if (current_element > array[j]) {
				array[i] = array[j];
				array[j] = current_element;
				current_element = array[i];
			}
		}
	}
}