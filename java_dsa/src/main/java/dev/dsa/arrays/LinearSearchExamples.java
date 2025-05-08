package dev.dsa.arrays;

import java.util.Arrays;

public class LinearSearchExamples {

    public void runLinearSearchExamples() {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        int target = 3;
        boolean[] breaks = new boolean[20];
        Arrays.fill(breaks, false);
        for(int i = 17; i < breaks.length; i++) {
            breaks[i] = true;
        }
        
        System.out.println("Java - Arrays - O(1) - Constant Time - Constant Operation: " + constantOperation(arr, target));
        System.out.println("Java - Arrays - O(N) - Linear Time - Linear Search: " + linearSearch(arr, target));
        System.out.println("Java - Arrays - O(logN) - Logarithmic Time - Binary Search:  " + binarySearch(arr, target));
        System.out.println("Java - Arrays - O(sqrt(N)) - Squared Root Time - Two Crystal Balls: " + twoCrystalBalls(breaks));
    }

    // O(1) - Constant Time
    private Integer constantOperation(int[] arr, int target) {
        return arr[0];
    }

    // O(N) - Linear Search
    private Integer linearSearch(int[] arr, int target) {
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == target) {
                return i;
            }
        }
        return -1;
    };

    // O(logN) - Binary Search
    private Integer binarySearch(int[] arr, int target) {

        int leftIdx = 0;
        int rightIdx = arr.length - 1;

        while (leftIdx <= rightIdx) {
            int midIdx = (int)Math.floor((leftIdx + rightIdx) / 2);

            if(arr[midIdx] == target){
                return arr[midIdx];
            }
            else if (target < arr[midIdx]){
                rightIdx = midIdx - 1;
            }
            else {
                leftIdx = midIdx + 1;
            }
        }

        return -1;
    }

    // O(sqrt(N)) - Two Crystal Balls
    private Integer twoCrystalBalls(boolean[] breaks) {
        int jmpAmount = (int) Math.sqrt(breaks.length);
        int i = jmpAmount;
        for(; i < breaks.length; i += jmpAmount) {
            if(breaks[i]) {
                break;
            }
        }
        i -= jmpAmount;
        for(int j = i;  j < breaks.length; j++){
            if(breaks[j]){
                return j;
            }
        }

        return -1;
    }
}

