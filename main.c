#include <stdio.h>
#include <stdlib.h>
#include "clinq/clinq.h"
#include "utils/easy_output.h"

int main(int argc, char const *argv[])
{
    float arr[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    map_f(arr, 10, lambda(float, (float x), { return x / 2; }));
    print_arr_f(arr, 10);

    int new_size = 0;
    filter_f(arr, 10,&new_size, lambda(bool, (float x), { return x < 2.0 || x > 4.0; }));
    print_arr_f(arr, new_size);

    return 0;
}
