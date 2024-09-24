//selection sort
template<typename T> void selection_sort(T *array, int array_size) {
    int unsorted_array_size = array_size;
    int pointer = 0;
    int min_index = 0;
    T temp;
    
    for (int i = 0; i < array_size; i++) {
        T min = INT_MAX;
        for (int j = pointer; j < array_size; j++) {
            if (min > array[j]) { 
                min = array[j];
                min_index = j;
            }
        }

        temp = array[pointer];
        array[pointer] = min;
        array[min_index] = temp;

        pointer++;
    }
}