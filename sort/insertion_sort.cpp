//insertion_sort
template<typename T> void insertion_sort(T *array, int array_size) {
    for (int key_element_index = 1; key_element_index < array_size; key_element_index++) {

        int flag = 0;
        T key = array[key_element_index];
        int place_to_paste = 0;

        for (int j = key_element_index - 1; j > -1; j--) {
            T curr_element = array[j];
            if (curr_element > key) {
                flag = 1;
                place_to_paste = j;
            }
        }

        if (flag) {
            for (int i = key_element_index; i > place_to_paste; i--) {
                array[i] = array[i - 1];
            }
            array[place_to_paste] = key;
        }
    }
}

