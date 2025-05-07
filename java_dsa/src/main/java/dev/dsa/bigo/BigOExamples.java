package dev.dsa.bigo;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class BigOExamples {

    public void runBigO() {
        int[] testArr = {1, 2, 3, 4, 5};
        int fibonacciNumber = 5;
        int numberOfPermutations = 3;
        int[] permutations = {1, 2, 3};
        String testStr = "abc";
        int[] unsortedArr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
        int target = 5;
        System.out.println("O(1) - Constant Time: " + constantTimeExample(testArr));
        System.out.println("O(log N) - Logarithmic Time: " + binarySearch(testArr, target));
        System.out.println("O(N) - Linear Time: " + linearSum(testArr));
        System.out.println("O(N log N) - Log Linear Time: " + Arrays.toString(mergeSort(unsortedArr)));
        System.out.println("O(N^2) - Quadratic Time: " + sumCharCodesN2(testStr));
        System.out.println("O(N^3) - Cubic Time: " + sumCharCodesN3(testStr)); 
        System.out.println("O(2^N) - Exponential Time: " + findFibonacciNumber(fibonacciNumber));
        System.out.println("O(N!) - Factorial Time: " + getNumberOfPermutations(numberOfPermutations));
        System.out.println("O(N!) - Factorial Time: " + Arrays.deepToString(generatePermutations(permutations)));
    }

    // O(1) - Constant Time: The operation always takes the same amount of time, regardless of input size.
    private Integer constantTimeExample(int[] n) {
        return n[0];
    }

    // O(log N) - Logarithmic Time: The operation time increases logarithmically as the input size increases (e.g., binary search).
    private Integer binarySearch(int[] n, int target) {
        int low = 0;
        int high = n.length - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (n[mid] == target) return mid;
            if (n[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    // O(N) - Linear Time: The operation time increases linearly with the input size.
    private Integer linearSum(int[] n) {
        int sum = 0;
        for (int i = 0; i < n.length; i++) {
            sum += n[i];
        }
        return sum;
    }

    // O(N log N) - Linearithmic Time: The operation time increases in proportion to N log N (e.g., efficient sorting algorithms like merge sort).
    private int[] mergeSort(int[] arr) {
        if (arr.length <= 1) return arr;
        int mid = arr.length / 2;
        int[] left = mergeSort(Arrays.copyOfRange(arr, 0, mid));
        int[] right = mergeSort(Arrays.copyOfRange(arr, mid, arr.length));
        return merge(left, right);
    }

    private int[] merge(int[] left, int[] right) {
        int[] result = new int[left.length + right.length];
        int i = 0, j = 0, k = 0;
        while (i < left.length && j < right.length) {
            if (left[i] <= right[j]) {
                result[k++] = left[i++];
            } else {
                result[k++] = right[j++];
            }
        }
        while (i < left.length) result[k++] = left[i++];
        while (j < right.length) result[k++] = right[j++];
        return result;
    }

    // O(N^2) - Quadratic Time: The operation time increases proportionally to the square of the input size (e.g., nested loops).
    private Integer sumCharCodesN2(String str) {
        int sum = 0;
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < str.length(); j++) {
                sum += str.charAt(j);
            }
        }
        return sum;
    }

    // O(N^3) - Cubic Time: The operation time increases proportionally to the cube of the input size (e.g., three nested loops).
    private Integer sumCharCodesN3(String str) {
        int sum = 0;
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < str.length(); j++) {
                for (int k = 0; k < str.length(); k++) {
                    sum += str.charAt(k);
                }
            }
        }
        return sum;
    }

    // O(2^N) - Exponential Time: The operation time doubles with each additional input element (e.g., recursive Fibonacci).
    private Integer findFibonacciNumber(int n) {
        if (n <= 1) return n;
        return findFibonacciNumber(n - 1) + findFibonacciNumber(n - 2);
    }

    // O(N!) - Factorial Time: The operation time grows factorially with the input size (e.g., generating all permutations).
    private Integer getNumberOfPermutations(int n) {
        if (n <= 1) return 1;
        return n * getNumberOfPermutations(n - 1);
    }

    // O(N!) - Factorial Time: The operation time grows factorially with the input size (e.g., generating all permutations).
    private int[][] generatePermutations(int[] nums) {
        // declare the result array
        List<int[]> result = new ArrayList<>();
        // declare the length of the array
        int len = nums.length;
        // declare the backtrack function
        backtrack(nums, len, 0, result);
        
        return result.toArray(new int[0][]);
    }

    // declare the backtrack function
    private void backtrack(int[] nums, int len, int start, List<int[]> result) {
        
        // base case
        if (start == len) {
            result.add(nums.clone());
            return;
        }       

        // recursive case
        for (int i = start; i < len; i++) {
            // swap
            swap(nums, start, i);
            // backtrack
            backtrack(nums, len, start + 1, result);
            // swap back
            swap(nums, start, i);
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
}
