#pragma once

#include <vector>
#include <string>

namespace dev::dsa::bigo {

class BigOExamples {
public:
    void runBigO();

private:
    // O(1) - Constant Time
    int constantTimeExample(const std::vector<int>& n);

    // O(log N) - Logarithmic Time
    int binarySearch(const std::vector<int>& n, int target);

    // O(N) - Linear Time
    int linearSum(const std::vector<int>& n);

    // O(N log N) - Linearithmic Time
    std::vector<int> mergeSort(std::vector<int> arr);
    std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right);

    // O(N^2) - Quadratic Time
    int sumCharCodesN2(const std::string& str);

    // O(N^3) - Cubic Time
    int sumCharCodesN3(const std::string& str);

    // O(2^N) - Exponential Time
    int findFibonacciNumber(int n);

    // O(N!) - Factorial Time
    int getNumberOfPermutations(int n);
    std::vector<std::vector<int>> generatePermutations(std::vector<int> nums);
    void backtrack(std::vector<int>& nums, int len, int start, std::vector<std::vector<int>>& result);
    void swap(std::vector<int>& nums, int i, int j);
};

} // namespace dev::dsa::bigo 