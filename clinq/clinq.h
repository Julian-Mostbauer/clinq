#ifndef CLINQ_H
#define CLINQ_H

#include <stdbool.h>

/// @brief Creates a lambda function in C.
/// @note This macro generates an anonymous lambda function.
/// @note https://github.com/wd5gnr/clambda
/// @param lambda$_ret The return type of the lambda function.
/// @param lambda$_args The arguments of the lambda function.
/// @param lambda$_body The body of the lambda function.
#define lambda(lambda$_ret, lambda$_args, lambda$_body)      \
    ({                                                       \
        lambda$_ret lambda$__anon$ lambda$_args lambda$_body \
            &lambda$__anon$;                                 \
    })

/// @brief Applies a function to every element in the int array
/// @param arr The array to process.
/// @param arr_size The size of the array.
/// @param func The function to apply to each element.
/// @return A pointer to the new array with the applied function.
int *map_i(int *arr, int arr_size, int (*func)(int));

/// @brief Applies a function to every element in the float array
/// @param arr The array to process.
/// @param arr_size The size of the array.
/// @param func The function to apply to each element.
/// @return A pointer to the new array with the applied function.
float *map_f(float *arr, int arr_size, float (*func)(float));

/// @brief Filters the elements of an int array
/// @param arr The array to filter.
/// @param arr_size The size of the array.
/// @param new_size The size of the output array.
/// @param func The function to filter by.
/// @return A pointer to the new filtered array.
int *filter_i(int *arr, int arr_size, int *new_size, bool (*func)(int));

/// @brief Filters the elements of a float array
/// @param arr The array to filter.
/// @param arr_size The size of the array.
/// @param new_size The size of the output array.
/// @param func The function to filter by.
/// @return A pointer to the new filtered array.
float *filter_f(float *arr, int arr_size, int *new_size, bool (*func)(float));

/// @brief Checks if all the elements in an int array meet the contition
/// @param arr The array to check.
/// @param arr_size The size of the array.
/// @param func The function with a boolean output to check the elemnts by.
/// @return A bool that tells if all the elements meet the requirement.
bool all_i(const int* arr, int arr_size, bool (*func)(int));

/// @brief Checks if all the elements in a float array meet the contition
/// @param arr The array to check.
/// @param arr_size The size of the array.
/// @param func The function with a boolean output to check the elemnts by.
/// @return A bool that tells if all the elements meet the requirement.
bool all_f(const float* arr, int arr_size, bool (*func)(float));

/// @brief Checks if any of the elements in an int array meet the contition
/// @param arr The array to check.
/// @param arr_size The size of the array.
/// @param func The function with a boolean output to check the elemnts by.
/// @return A bool that tells if any of the elements meet the requirement.
bool any_i(const int* arr, int arr_size, bool (*func)(int));

/// @brief Checks if any of the elements in a float array meet the contition
/// @param arr The array to check.
/// @param arr_size The size of the array.
/// @param func The function with a boolean output to check the elemnts by.
/// @return A bool that tells if all the elements meet the requirement.
bool any_f(const float* arr, int arr_size, bool (*func)(float));

#endif // CLINQ_H