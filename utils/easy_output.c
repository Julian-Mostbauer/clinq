#include "easy_output.h"
#include <stdio.h>

void print_arr_i(int *arr, int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[len - 1]);
}

void print_arr_f(float *arr, int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        printf("%f, ", arr[i]);
    }
    printf("%f\n", arr[len - 1]);
}