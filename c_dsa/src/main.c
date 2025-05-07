#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/bigo.h"

void print_array(int *arr, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");
}

void print_permutations(int **perms, int num_perms, int size)
{
    printf("[");
    for (int i = 0; i < num_perms; i++)
    {
        printf("[");
        for (int j = 0; j < size; j++)
        {
            printf("%d", perms[i][j]);
            if (j < size - 1)
                printf(", ");
        }
        printf("]");
        if (i < num_perms - 1)
            printf(", ");
    }
    printf("]\n");
}

int main()
{
    // Test data
    int test_arr[] = {1, 2, 3, 4, 5};
    int test_arr_size = sizeof(test_arr) / sizeof(test_arr[0]);
    int fibonacci_number = 5;
    int number_of_permutations = 3;
    int permutations[] = {1, 2, 3};
    int permutations_size = sizeof(permutations) / sizeof(permutations[0]);
    const char *test_str = "abc";
    int unsorted_arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int unsorted_arr_size = sizeof(unsorted_arr) / sizeof(unsorted_arr[0]);
    int target = 5;

    // Run examples
    printf("O(1) - Constant Time: %d\n", constant_time_example(test_arr, test_arr_size));
    printf("O(log N) - Logarithmic Time: %d\n", binary_search(test_arr, test_arr_size, target));
    printf("O(N) - Linear Time: %d\n", linear_sum(test_arr, test_arr_size));

    // Create a copy of unsorted_arr for merge sort
    int *sorted_arr = (int *)malloc(unsorted_arr_size * sizeof(int));
    memcpy(sorted_arr, unsorted_arr, unsorted_arr_size * sizeof(int));
    merge_sort(sorted_arr, unsorted_arr_size);
    printf("O(N log N) - Log Linear Time: ");
    print_array(sorted_arr, unsorted_arr_size);
    free(sorted_arr);

    printf("O(N^2) - Quadratic Time: %d\n", sum_char_codes_n2(test_str));
    printf("O(N^3) - Cubic Time: %d\n", sum_char_codes_n3(test_str));
    printf("O(2^N) - Exponential Time: %d\n", find_fibonacci_number(fibonacci_number));
    printf("O(N!) - Factorial Time: %d\n", get_number_of_permutations(number_of_permutations));

    // Generate permutations
    int **result = NULL;
    int result_size = 0;
    generate_permutations(permutations, permutations_size, &result, &result_size);
    printf("O(N!) - Factorial Time (Permutations): ");
    print_permutations(result, result_size, permutations_size);

    // Free permutations memory
    for (int i = 0; i < result_size; i++)
    {
        free(result[i]);
    }
    free(result);

    return 0;
}