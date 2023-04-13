#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
	size_t i;
		if (array==NULL)
			return (-1);
			    
		for (size_t i = 0; i < size; i++) {
        		if (array[i] == value) {
            printf("Found %d at index %zu\n", value, i);
            return (i);
        }
    }
    return (-1);
}
