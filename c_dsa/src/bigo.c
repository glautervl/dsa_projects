#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/bigo.h"

// O(1) - Constant Time
int constant_time_example(int *arr, int size)
{
    return arr[0];
}

// O(log N) - Logarithmic Time
int binary_search(int *arr, int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// O(N) - Linear Time
int linear_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// O(N log N) - Linearithmic Time
void merge(int *left, int left_size, int *right, int right_size, int *result)
{
    int i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size)
    {
        if (left[i] <= right[j])
        {
            result[k++] = left[i++];
        }
        else
        {
            result[k++] = right[j++];
        }
    }

    while (i < left_size)
        result[k++] = left[i++];
    while (j < right_size)
        result[k++] = right[j++];
}

void merge_sort(int *arr, int size)
{
    if (size <= 1)
        return;

    int mid = size / 2;
    int *left = (int *)malloc(mid * sizeof(int));
    int *right = (int *)malloc((size - mid) * sizeof(int));

    memcpy(left, arr, mid * sizeof(int));
    memcpy(right, arr + mid, (size - mid) * sizeof(int));

    merge_sort(left, mid);
    merge_sort(right, size - mid);
    merge(left, mid, right, size - mid, arr);

    free(left);
    free(right);
}

// O(N^2) - Quadratic Time
int sum_char_codes_n2(const char *str)
{
    int sum = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            sum += str[j];
        }
    }
    return sum;
}

// O(N^3) - Cubic Time
int sum_char_codes_n3(const char *str)
{
    int sum = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            for (int k = 0; k < len; k++)
            {
                sum += str[k];
            }
        }
    }
    return sum;
}

// O(2^N) - Exponential Time
int find_fibonacci_number(int n)
{
    if (n <= 1)
        return n;
    return find_fibonacci_number(n - 1) + find_fibonacci_number(n - 2);
}

// O(N!) - Factorial Time
int get_number_of_permutations(int n)
{
    if (n <= 1)
        return 1;
    return n * get_number_of_permutations(n - 1);
}

// Helper function for permutations
void swap(int *nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

// O(N!) - Factorial Time with array generation
void backtrack(int *nums, int size, int start, int ***result, int *result_size)
{
    if (start == size)
    {
        // Allocate new permutation
        int *new_perm = (int *)malloc(size * sizeof(int));
        memcpy(new_perm, nums, size * sizeof(int));

        // Resize result array
        *result = (int **)realloc(*result, (*result_size + 1) * sizeof(int *));
        (*result)[*result_size] = new_perm;
        (*result_size)++;
        return;
    }

    for (int i = start; i < size; i++)
    {
        swap(nums, start, i);
        backtrack(nums, size, start + 1, result, result_size);
        swap(nums, start, i);
    }
}

void generate_permutations(int *nums, int size, int ***result, int *result_size)
{
    *result = NULL;
    *result_size = 0;
    backtrack(nums, size, 0, result, result_size);
}