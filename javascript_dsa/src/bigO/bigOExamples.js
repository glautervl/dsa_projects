// O(1) - Constant time
function constantTimeExample(n) {
    return n[0];
}

// O(log N) - Logarithmic time (binary search)
function binarySearch(n, target) {
    let low = 0;
    let high = n.length - 1;
    while (low <= high) {
        const mid = Math.floor((low + high) / 2);
        if (n[mid] === target) return mid;
        if (n[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// O(N) - Linear time
function linearSum(n) {
    let sum = 0;
    for (let i = 0; i < n.length; ++i) {
        sum += n[i];
    }
    return sum;
}

// O(N log N) - Linearithmic time (merge sort)
function mergeSort(arr) {
    if (arr.length <= 1) return arr;

    // split the array into two halves
    const mid = Math.floor(arr.length / 2);
    // sort the left half
    const left = mergeSort(arr.slice(0, mid));
    // sort the right half
    const right = mergeSort(arr.slice(mid));
    // merge the two halves
    return merge(left, right);
}

function merge(left, right) {
    const result = [];
    let i = 0, j = 0;
    while (i < left.length && j < right.length) {
        if (left[i] <= right[j]) result.push(left[i++]);
        else result.push(right[j++]);
    }
    return result.concat(left.slice(i)).concat(right.slice(j));
}

// O(N^2)
function sum_char_codes_n2(n) {
    let sum = 0;
    for (let i = 0; i < n.length; ++i) {
        for (let j = 0; j < n.length; ++j) {
            sum += n.charCodeAt(j);
        }
    }
    return sum;
}

// O(N^3)
function sum_char_codes_n3(n) {
    let sum = 0;
    for (let i = 0; i < n.length; ++i) {
        for (let j = 0; j < n.length; ++j) {
            for (let k = 0; k < n.length; ++k) {
                sum += n.charCodeAt(k);
            }
        }
    }
    return sum;
}

// O(2^N) - Exponential time (Fibonacci)
function findFibonacciNumber(n) {
    if (n <= 1) return n;
    return findFibonacciNumber(n - 1) + findFibonacciNumber(n - 2);
}

// O(N!) - Factorial time (Number of Permutations)
function getNumberOfPermutations(n) {
    if (n <= 1) return 1;
    return n * getNumberOfPermutations(n - 1);
}

// O(N!) - Factorial time (Permutations)
const generatePermutations = (nums) => {
    
    // declare the result array
    const result = [];
    // declare the length of the array
    const len = nums.length;
    
    // declare the backtrack function
    const backtrack = (start) => {
        // base case
        if (start === len) {
            result.push([...nums]);
            return;
        }

        // recursive case
        for (let i = start; i < len; i++) {
            // swap
            [nums[start], nums[i]] = [nums[i], nums[start]];
            // backtrack
            backtrack(start + 1);
            // swap back
            [nums[start], nums[i]] = [nums[i], nums[start]];
        }
    }

    // start the backtracking process
    backtrack(0);

    // return the result
    return result;
}

function runBigOExamples() {
    // Example usage and test
    const testStr = "abc";
    const testArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    const unsortedArr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5];
    const numberOfPermutations = 3;
    const permutations = [1, 2, 3];
    const fibonacciNumber = 10;
    const target = 5;
    console.log("JavaScript - O(1) - Constant Time:", constantTimeExample(testArr));
    console.log("JavaScript - O(log N) - Logarithmic Time:", binarySearch(testArr, target));
    console.log("JavaScript - O(N) - Linear Time:", linearSum(testArr));
    console.log("JavaScript - O(N log N) - Log Linear Time:", mergeSort(unsortedArr));
    console.log("JavaScript - O(N^2) - Quadratic Time:", sum_char_codes_n2(testStr));
    console.log("JavaScript - O(N^3) - Cubic Time:", sum_char_codes_n3(testStr));
    console.log("JavaScript - O(2^N) - Exponential Time:", findFibonacciNumber(fibonacciNumber));
    console.log("JavaScript - O(N!) - Factorial Time:", getNumberOfPermutations(numberOfPermutations));
    console.log("JavaScript - O(N!) - Factorial Time:", generatePermutations(permutations));
}

export default runBigOExamples;