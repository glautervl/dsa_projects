#include "dev/dsa/bigo/BigOExamples.hpp"
#include <iostream>
#include <algorithm>

namespace dev::dsa::bigo {

void BigOExamples::runBigO() {
    std::vector<int> testArr = {1, 2, 3, 4, 5};
    int fibonacciNumber = 5;
    int numberOfPermutations = 3;
    std::vector<int> permutations = {1, 2, 3};
    std::string testStr = "abc";
    std::vector<int> unsortedArr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int target = 5;

    std::cout << "O(1) - Constant Time: " << constantTimeExample(testArr) << std::endl;
    std::cout << "O(log N) - Logarithmic Time: " << binarySearch(testArr, target) << std::endl;
    std::cout << "O(N) - Linear Time: " << linearSum(testArr) << std::endl;
    
    auto sortedArr = mergeSort(unsortedArr);
    std::cout << "O(N log N) - Log Linear Time: ";
    for (const auto& num : sortedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "O(N^2) - Quadratic Time: " << sumCharCodesN2(testStr) << std::endl;
    std::cout << "O(N^3) - Cubic Time: " << sumCharCodesN3(testStr) << std::endl;
    std::cout << "O(2^N) - Exponential Time: " << findFibonacciNumber(fibonacciNumber) << std::endl;
    std::cout << "O(N!) - Factorial Time: " << getNumberOfPermutations(numberOfPermutations) << std::endl;
    
    auto perms = generatePermutations(permutations);
    std::cout << "O(N!) - Factorial Time (Permutations): ";
    for (const auto& perm : perms) {
        std::cout << "[ ";
        for (const auto& num : perm) {
            std::cout << num << " ";
        }
        std::cout << "] ";
    }
    std::cout << std::endl;
}

int BigOExamples::constantTimeExample(const std::vector<int>& n) {
    return n[0];
}

int BigOExamples::binarySearch(const std::vector<int>& n, int target) {
    int low = 0;
    int high = n.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (n[mid] == target) return mid;
        if (n[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int BigOExamples::linearSum(const std::vector<int>& n) {
    int sum = 0;
    for (const auto& num : n) {
        sum += num;
    }
    return sum;
}

std::vector<int> BigOExamples::mergeSort(std::vector<int> arr) {
    if (arr.size() <= 1) return arr;
    int mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());
    left = mergeSort(std::move(left));
    right = mergeSort(std::move(right));
    return merge(left, right);
}

std::vector<int> BigOExamples::merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    result.reserve(left.size() + right.size());
    size_t i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i++]);
        } else {
            result.push_back(right[j++]);
        }
    }
    while (i < left.size()) result.push_back(left[i++]);
    while (j < right.size()) result.push_back(right[j++]);
    return result;
}

int BigOExamples::sumCharCodesN2(const std::string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.length(); i++) {
        for (size_t j = 0; j < str.length(); j++) {
            sum += str[j];
        }
    }
    return sum;
}

int BigOExamples::sumCharCodesN3(const std::string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.length(); i++) {
        for (size_t j = 0; j < str.length(); j++) {
            for (size_t k = 0; k < str.length(); k++) {
                sum += str[k];
            }
        }
    }
    return sum;
}

int BigOExamples::findFibonacciNumber(int n) {
    if (n <= 1) return n;
    return findFibonacciNumber(n - 1) + findFibonacciNumber(n - 2);
}

int BigOExamples::getNumberOfPermutations(int n) {
    if (n <= 1) return 1;
    return n * getNumberOfPermutations(n - 1);
}

std::vector<std::vector<int>> BigOExamples::generatePermutations(std::vector<int> nums) {
    std::vector<std::vector<int>> result;
    backtrack(nums, nums.size(), 0, result);
    return result;
}

void BigOExamples::backtrack(std::vector<int>& nums, int len, int start, std::vector<std::vector<int>>& result) {
    if (start == len) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < len; i++) {
        swap(nums, start, i);
        backtrack(nums, len, start + 1, result);
        swap(nums, start, i);
    }
}

void BigOExamples::swap(std::vector<int>& nums, int i, int j) {
    std::swap(nums[i], nums[j]);
}

} // namespace dev::dsa::bigo 