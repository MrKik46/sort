
//optimized_bubble_sort
template<typename T> void optimized_bubble_sort(T *array, int array_size) {
	int sorted_part_index = array_size;

	int max_change_index = 0;
	int is_sorting = 1;

	T temp;

	for (int i = 0; i < array_size; i++) {
		
		is_sorting = 0;
		max_change_index = 0;

		for (int j = 1; j < sorted_part_index; j++) {
			if (array[j - 1] > array[j]) {
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				is_sorting = 1;

				if (j > max_change_index)  max_change_index = j;
			}
		}

		if (not is_sorting) {
			break;
		}
		else {
			sorted_part_index = max_change_index;
		}
	}
}

