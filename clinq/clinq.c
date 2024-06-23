#include "clinq.h"

int *map_i(int *arr, int arr_size, int (*func)(int))
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = func(arr[i]);
    }
    return arr;
}

float *map_f(float *arr, int arr_size, float (*func)(float))
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = func(arr[i]);
    }
    return arr;
}

int *filter_i(int *arr, int arr_size,int* new_size, bool (*func)(int))
{
    int write_index = 0; // Index to write filtered elements

    for (int i = 0; i < arr_size; i++)
    {
        if (func(arr[i]))
        {
            arr[write_index++] = arr[i];
        }
    }
    (*new_size) = write_index;
    return arr; // Return the new size of the filtered array
}
float *filter_f(float *arr, int arr_size,int* new_size, bool (*func)(float))
{
    int write_index = 0; // Index to write filtered elements

    for (int i = 0; i < arr_size; i++)
    {
        if (func(arr[i]))
        {
            arr[write_index++] = arr[i];
        }
    }
    (*new_size) = write_index;
    return arr; // Return the new size of the filtered array
}