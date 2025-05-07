#include "dev/dsa/bigo/BigOExamples.hpp"
#include <gtest/gtest.h>

namespace dev::dsa::bigo::test {

class BigOExamplesTest : public ::testing::Test {
protected:
    BigOExamples examples;
};

TEST_F(BigOExamplesTest, ConstantTimeExample) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    EXPECT_EQ(examples.constantTimeExample(arr), 1);
}

TEST_F(BigOExamplesTest, BinarySearch) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    EXPECT_EQ(examples.binarySearch(arr, 3), 2);
    EXPECT_EQ(examples.binarySearch(arr, 6), -1);
}

TEST_F(BigOExamplesTest, LinearSum) {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    EXPECT_EQ(examples.linearSum(arr), 15);
}

TEST_F(BigOExamplesTest, MergeSort) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};
    EXPECT_EQ(examples.mergeSort(arr), expected);
}

TEST_F(BigOExamplesTest, SumCharCodesN2) {
    std::string str = "abc";
    EXPECT_EQ(examples.sumCharCodesN2(str), 294); // 97 + 98 + 99 = 294
}

TEST_F(BigOExamplesTest, SumCharCodesN3) {
    std::string str = "abc";
    EXPECT_EQ(examples.sumCharCodesN3(str), 882); // 294 * 3 = 882
}

TEST_F(BigOExamplesTest, FindFibonacciNumber) {
    EXPECT_EQ(examples.findFibonacciNumber(5), 5);
    EXPECT_EQ(examples.findFibonacciNumber(6), 8);
}

TEST_F(BigOExamplesTest, GetNumberOfPermutations) {
    EXPECT_EQ(examples.getNumberOfPermutations(3), 6);
    EXPECT_EQ(examples.getNumberOfPermutations(4), 24);
}

TEST_F(BigOExamplesTest, GeneratePermutations) {
    std::vector<int> nums = {1, 2, 3};
    auto perms = examples.generatePermutations(nums);
    EXPECT_EQ(perms.size(), 6);
    std::vector<std::vector<int>> expected = {
        {1, 2, 3}, {1, 3, 2}, {2, 1, 3},
        {2, 3, 1}, {3, 1, 2}, {3, 2, 1}
    };
    EXPECT_EQ(perms, expected);
}

} // namespace dev::dsa::bigo::test 