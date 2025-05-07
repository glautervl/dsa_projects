#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <stdlib.h>
#include "../include/bigo.h"

void test_constant_time(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    CU_ASSERT_EQUAL(constant_time_example(arr, 5), 1);
}

void test_binary_search(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    CU_ASSERT_EQUAL(binary_search(arr, 5, 3), 2);
    CU_ASSERT_EQUAL(binary_search(arr, 5, 6), -1);
}

void test_linear_sum(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    CU_ASSERT_EQUAL(linear_sum(arr, 5), 15);
}

void test_merge_sort(void)
{
    int arr[] = {3, 1, 4, 1, 5};
    int expected[] = {1, 1, 3, 4, 5};
    merge_sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        CU_ASSERT_EQUAL(arr[i], expected[i]);
    }
}

void test_sum_char_codes_n2(void)
{
    const char *str = "abc";
    int len = 3;
    int expected = (97 + 98 + 99) * len; // Each character is added len times
    CU_ASSERT_EQUAL(sum_char_codes_n2(str), expected);
}

void test_sum_char_codes_n3(void)
{
    const char *str = "abc";
    int len = 3;
    int expected = (97 + 98 + 99) * len * len; // Each character is added len^2 times
    CU_ASSERT_EQUAL(sum_char_codes_n3(str), expected);
}

void test_fibonacci(void)
{
    CU_ASSERT_EQUAL(find_fibonacci_number(5), 5);
    CU_ASSERT_EQUAL(find_fibonacci_number(6), 8);
}

void test_permutations(void)
{
    CU_ASSERT_EQUAL(get_number_of_permutations(3), 6);

    int nums[] = {1, 2, 3};
    int **result = NULL;
    int result_size = 0;
    generate_permutations(nums, 3, &result, &result_size);

    CU_ASSERT_EQUAL(result_size, 6);

    // Free memory
    for (int i = 0; i < result_size; i++)
    {
        free(result[i]);
    }
    free(result);
}

int main()
{
    // Initialize CUnit
    if (CUE_SUCCESS != CU_initialize_registry())
    {
        return CU_get_error();
    }

    // Create test suite
    CU_pSuite suite = CU_add_suite("BigO_Suite", NULL, NULL);
    if (NULL == suite)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add tests
    if ((NULL == CU_add_test(suite, "test_constant_time", test_constant_time)) ||
        (NULL == CU_add_test(suite, "test_binary_search", test_binary_search)) ||
        (NULL == CU_add_test(suite, "test_linear_sum", test_linear_sum)) ||
        (NULL == CU_add_test(suite, "test_merge_sort", test_merge_sort)) ||
        (NULL == CU_add_test(suite, "test_sum_char_codes_n2", test_sum_char_codes_n2)) ||
        (NULL == CU_add_test(suite, "test_sum_char_codes_n3", test_sum_char_codes_n3)) ||
        (NULL == CU_add_test(suite, "test_fibonacci", test_fibonacci)) ||
        (NULL == CU_add_test(suite, "test_permutations", test_permutations)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Run tests
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}