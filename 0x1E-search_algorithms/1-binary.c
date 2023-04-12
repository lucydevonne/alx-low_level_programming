#include <stdio.h>

int binary_search(int *array, size_t size, int value); {
	for (size_t i = 0; i < size; i++) {
        if (array[i] == value) {
            printf("Found %d at index %zu\n", value, i);
            return i;
        }
    }
    printf("%d not found in the array\n", value);
    return -1;
}
