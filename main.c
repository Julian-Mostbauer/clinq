#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "clinq/clinq.h"
#include "utils/easy_output.h"


float tmp_func(float x)
{
    float (*f[2])(float) = {sqrtf, logf};
    return invoke_each_f(x, 2, f);
}

int main(int argc, char const *argv[])
{
    lambda(void, (int x), {printf("%d\n",x);})(13);

    float arr[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    puts("Originial Array: ");
    print_arr_f(arr, 10);

    map_f(arr, 10, tmp_func);
    puts("\nNew Array");
    print_arr_f(arr, 10);

    return 0;
}
