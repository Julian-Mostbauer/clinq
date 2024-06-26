#include "clinq.h"

int *map_i(int *arr, const int arr_size, int (*const func)(int))
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = func(arr[i]);
    }
    return arr;
}

float *map_f(float *arr, const const int arr_size, float (*const func)(float))
{
    for (int i = 0; i < arr_size; i++)
    { 
        arr[i] = func(arr[i]);
    }
    return arr;
}

int *filter_i(int *arr, const int arr_size, int *new_size, bool (*const func)(int))
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
    return arr;
}
float *filter_f(float *arr, const int arr_size, int *new_size, bool (*const func)(float))
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
    return arr;
}

bool all_i(const int *arr, const int arr_size, bool (*const func)(int))
{
    for (int i = 0; i < arr_size; i++)
    {
        if (!func(arr[i]))
            return false;
    }
    return true;
}

bool all_f(const float *arr, const int arr_size, bool (*const func)(float))
{
    for (int i = 0; i < arr_size; i++)
    {
        if (!func(arr[i]))
            return false;
    }
    return true;
}

bool any_i(const int *arr, const int arr_size, bool (*const func)(int))
{
    for (int i = 0; i < arr_size; i++)
    {
        if (func(arr[i]))
            return true;
    }
    return false;
}

bool any_f(const float *arr, const int arr_size, bool (*const func)(float))
{
    for (int i = 0; i < arr_size; i++)
    {
        if (func(arr[i]))
            return true;
    }
    return false;
}

int invoke_each_i(int val, int arr_size, int (*const *funcs)(int))
{
    for (int i = 0; i < arr_size; i++)
    {
        val = funcs[i](val);
    }
    return val;
}

float invoke_each_f(float val, int arr_size, float (*const *funcs)(float))
{
    for (int i = 0; i < arr_size; i++)
    {
        val = funcs[i](val);
    }
    return val;
}