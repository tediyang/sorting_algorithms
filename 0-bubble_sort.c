#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int i = 0, j;

    while (i < size)
    {
        for (j = 0; j < size - 1; j++)
        {
            int temp;

            if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    print_array(array, size);
                }
        }
        i++;
    }
}
