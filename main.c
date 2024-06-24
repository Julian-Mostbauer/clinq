#include <stdio.h>
#include <stdlib.h>
#include "clinq/clinq.h"
#include "utils/easy_output.h"

int main(int argc, char const *argv[])
{
    float arr[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    puts("Originial Array: ");
    print_arr_f(arr, 10);

    map_f(arr, 10, lambda(float, (float x), { return x / 2; }));
    puts("\nArray / 2: ");
    print_arr_f(arr, 10);

    int new_size = 0;
    puts("\nArray filtered with smaller 2 or bigger 4: ");
    filter_f(arr, 10,&new_size, lambda(bool, (float x), { return x < 2.0 || x > 4.0; }));
    print_arr_f(arr, new_size);

    printf("\nAny Test 00: Should be 0, got %d\n", any_f(arr, new_size, lambda(bool, (float x), {return x >= 2.0 && x <= 4.0;})));
    printf("\nAny Test 01: Should be 1, got %d\n", any_f(arr, new_size, lambda(bool, (float x), {return x > 1.0 || x < 4.5;})));
    
    printf("\nAll Test 00: Should be 0: got %d\n", all_f(arr, new_size, lambda(bool, (float x), {return x < 4;})));
    printf("\nAll Test 01: Should be 1: got %d\n", all_f(arr, new_size, lambda(bool, (float x), {return x < 2.0 || x > 4.0; })));

    return 0;
}
