"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.constantTimeExample = constantTimeExample;
exports.logarithmicTimeExample = logarithmicTimeExample;
exports.linearTimeExample = linearTimeExample;
exports.mergeSort = mergeSort;
exports.sum_char_codes_n2 = sum_char_codes_n2;
exports.sum_char_codes_n3 = sum_char_codes_n3;
exports.fibonacci = fibonacci;
exports.default = runBigOExamples;
// O(1) - Constant time
function constantTimeExample(n) {
    return n[0];
}
// O(log N) - Logarithmic time (binary search)
function logarithmicTimeExample(n) {
    var low = 0;
    var high = n.length - 1;
    while (low <= high) {
        var mid = Math.floor((low + high) / 2);
        if (n[mid] === 42)
            return mid;
        if (n[mid] < 42)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
// O(N) - Linear time
function linearTimeExample(n) {
    var sum = 0;
    for (var i = 0; i < n.length; ++i) {
        sum += n[i];
    }
    return sum;
}
// O(N log N) - Linearithmic time (merge sort)
function mergeSort(arr) {
    if (arr.length <= 1)
        return arr;
    var mid = Math.floor(arr.length / 2);
    var left = mergeSort(arr.slice(0, mid));
    var right = mergeSort(arr.slice(mid));
    return merge(left, right);
}
function merge(left, right) {
    var result = [];
    var i = 0, j = 0;
    while (i < left.length && j < right.length) {
        if (left[i] <= right[j])
            result.push(left[i++]);
        else
            result.push(right[j++]);
    }
    return result.concat(left.slice(i)).concat(right.slice(j));
}
// O(N^2)
function sum_char_codes_n2(n) {
    var sum = 0;
    for (var i = 0; i < n.length; ++i) {
        for (var j = 0; j < n.length; ++j) {
            sum += n.charCodeAt(j);
        }
    }
    return sum;
}
// O(N^3)
function sum_char_codes_n3(n) {
    var sum = 0;
    for (var i = 0; i < n.length; ++i) {
        for (var j = 0; j < n.length; ++j) {
            for (var k = 0; k < n.length; ++k) {
                sum += n.charCodeAt(k);
            }
        }
    }
    return sum;
}
// O(2^N) - Exponential time (Fibonacci)
function fibonacci(n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
function runBigOExamples() {
    // Example usage and test
    var testStr = "abc";
    var testArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    console.log("O(1):", constantTimeExample(testArr));
    console.log("O(log N):", logarithmicTimeExample(testArr));
    console.log("O(N):", linearTimeExample(testArr));
    console.log("O(N log N):", mergeSort([3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]));
    console.log("O(N^2):", sum_char_codes_n2(testStr));
    console.log("O(N^3):", sum_char_codes_n3(testStr));
    console.log("O(2^N):", fibonacci(10));
}
