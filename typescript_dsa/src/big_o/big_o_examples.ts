// O(1) - Constant Time: The operation always takes the same amount of time, regardless of input size.
function constantTimeExample(n: number[]): number {
    return n[0];
}

// O(log N) - Logarithmic Time: The operation time increases logarithmically as the input size increases (e.g., binary search).
function binarySEarch(n: number[], target: number): number {
    let low = 0;
    let high = n.length - 1;
    while (low <= high) {
        const mid = Math.floor((low + high) / 2);
        if (n[mid] === 42) return mid;
        if (n[mid] < 42) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// O(N) - Linear Time: The operation time increases linearly with the input size.
function linearSum(n: number[]): number {
    let sum = 0;
    for (let i = 0; i < n.length; ++i) {
        sum += n[i];
    }
    return sum;
}

// O(N log N) - Linearithmic Time: The operation time increases in proportion to N log N (e.g., efficient sorting algorithms like merge sort).
function mergeSort(arr: number[]): number[] {
    if (arr.length <= 1) return arr;
    const mid = Math.floor(arr.length / 2);
    const left = mergeSort(arr.slice(0, mid));
    const right = mergeSort(arr.slice(mid));
    return merge(left, right);
}

function merge(left: number[], right: number[]): number[] {
    const result: number[] = [];
    let i = 0, j = 0;
    while (i < left.length && j < right.length) {
        if (left[i] <= right[j]) 
            result.push(left[i++]);
        else result.push(right[j++]);
    }
    return result.concat(left.slice(i)).concat(right.slice(j));
}

// O(N^2) - Quadratic Time: The operation time increases proportionally to the square of the input size (e.g., nested loops).
function sum_char_codes_n2(n: string): number {
    let sum = 0;
    for (let i = 0; i < n.length; ++i) {
        for (let j = 0; j < n.length; ++j) {
            sum += n.charCodeAt(j);
        }
    }
    return sum;
}

// O(N^3) - Cubic Time: The operation time increases proportionally to the cube of the input size (e.g., three nested loops).
function sum_char_codes_n3(n: string): number {
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

// O(2^N) - Exponential Time: The operation time doubles with each additional input element (e.g., recursive Fibonacci).
function findFibonacciNumber(n: number): number {
    if (n <= 1) return n;
    return findFibonacciNumber(n - 1) + findFibonacciNumber(n - 2);
}

// O(N!) - Factorial Time: The operation time grows factorially with the input size (e.g., generating all permutations).
function getNumberOfPermutations(n: number): number {
    if (n <= 1) return 1;
    return n * getNumberOfPermutations(n - 1);
}

// O(N!) - Factorial Time: The operation time grows factorially with the input size (e.g., generating all permutations).
const generatePermutations = (nums: number[]) : number[][] => {

    // declare the result array
    const result: number[][] = [];
    // declare the length of the array
    const len = nums.length;

    // declare the backtrack function
    const backtrack = (start: number) => {
        
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


export default function runBigOExamples() {
    // Example usage and test
    const testStr = "abc";
    const testArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    const unsortedArr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5];
    const numberOfPermutations = 3;
    const permutations = [1, 2, 3];
    const fibonacciNumber = 10;
    const target = 5;

    console.log("TypeScript - O(1) - Constant Time:", constantTimeExample(testArr));
    console.log("TypeScript - O(log N) - Logarithmic Time:", binarySEarch(testArr, target));
    console.log("TypeScript - O(N) - Linear Time:", linearSum(testArr));
    console.log("TypeScript - O(N log N) - Linearithmic Time:", mergeSort(unsortedArr));
    console.log("TypeScript - O(N^2) - Quadratic Time:", sum_char_codes_n2(testStr));
    console.log("TypeScript - O(N^3) - Cubic Time:", sum_char_codes_n3(testStr));
    console.log("TypeScript - O(2^N) - Exponential Time:", findFibonacciNumber(fibonacciNumber));
    console.log("TypeScript - O(N!) - Factorial Time:", getNumberOfPermutations(numberOfPermutations));
    console.log("TypeScript - O(N!) - Factorial Time:", generatePermutations(permutations));
}