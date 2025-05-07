#ifndef BIGO_H
#define BIGO_H

// O(1) - Constant Time
int constant_time_example(int *arr, int size);

// O(log N) - Logarithmic Time
int binary_search(int *arr, int size, int target);

// O(N) - Linear Time
int linear_sum(int *arr, int size);

// O(N log N) - Linearithmic Time
void merge_sort(int *arr, int size);
void merge(int *left, int left_size, int *right, int right_size, int *result);

// O(N^2) - Quadratic Time
int sum_char_codes_n2(const char *str);

// O(N^3) - Cubic Time
int sum_char_codes_n3(const char *str);

// O(2^N) - Exponential Time
int find_fibonacci_number(int n);

// O(N!) - Factorial Time
int get_number_of_permutations(int n);

// O(N!) - Factorial Time with array generation
void generate_permutations(int *nums, int size, int ***result, int *result_size);
void backtrack(int *nums, int size, int start, int ***result, int *result_size);
void swap(int *nums, int i, int j);

#endif // BIGO_H