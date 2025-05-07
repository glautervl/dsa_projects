package bigo

import (
	"fmt"
)

// BigOExamples contains methods demonstrating different Big O complexities
type BigOExamples struct{}

// NewBigOExamples creates a new instance of BigOExamples
func NewBigOExamples() *BigOExamples {
	return &BigOExamples{}
}

// RunBigO runs all Big O examples
func (b *BigOExamples) RunBigO() {
	testArr := []int{1, 2, 3, 4, 5}
	fibonacciNumber := 5
	numberOfPermutations := 3
	permutations := []int{1, 2, 3}
	testStr := "abc"
	unsortedArr := []int{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}
	target := 5

	fmt.Printf("Go - O(1) - Constant Time: %d\n", b.constantTimeExample(testArr))
	fmt.Printf("Go - O(log N) - Logarithmic Time: %d\n", b.binarySearch(testArr, target))
	fmt.Printf("Go - O(N) - Linear Time: %d\n", b.linearSum(testArr))
	fmt.Printf("Go - O(N log N) - Log Linear Time: %v\n", b.mergeSort(unsortedArr))
	fmt.Printf("Go - O(N^2) - Quadratic Time: %d\n", b.sumCharCodesN2(testStr))
	fmt.Printf("Go - O(N^3) - Cubic Time: %d\n", b.sumCharCodesN3(testStr))
	fmt.Printf("Go - O(2^N) - Exponential Time: %d\n", b.findFibonacciNumber(fibonacciNumber))
	fmt.Printf("Go - O(N!) - Factorial Time: %d\n", b.getNumberOfPermutations(numberOfPermutations))
	fmt.Printf("Go - O(N!) - Factorial Time: %v\n", b.generatePermutations(permutations))
}

// O(1) - Constant Time: The operation always takes the same amount of time, regardless of input size.
func (b *BigOExamples) constantTimeExample(n []int) int {
	return n[0]
}

// O(log N) - Logarithmic Time: The operation time increases logarithmically as the input size increases.
func (b *BigOExamples) binarySearch(n []int, target int) int {
	low := 0
	high := len(n) - 1

	for low <= high {
		mid := (low + high) / 2
		if n[mid] == target {
			return mid
		}
		if n[mid] < target {
			low = mid + 1
		} else {
			high = mid - 1
		}
	}
	return -1
}

// O(N) - Linear Time: The operation time increases linearly with the input size.
func (b *BigOExamples) linearSum(n []int) int {
	sum := 0
	for _, v := range n {
		sum += v
	}
	return sum
}

// O(N log N) - Linearithmic Time: The operation time increases in proportion to N log N.
func (b *BigOExamples) mergeSort(arr []int) []int {
	if len(arr) <= 1 {
		return arr
	}

	mid := len(arr) / 2
	left := b.mergeSort(arr[:mid])
	right := b.mergeSort(arr[mid:])
	return b.merge(left, right)
}

func (b *BigOExamples) merge(left, right []int) []int {
	result := make([]int, 0, len(left)+len(right))
	i, j := 0, 0

	for i < len(left) && j < len(right) {
		if left[i] <= right[j] {
			result = append(result, left[i])
			i++
		} else {
			result = append(result, right[j])
			j++
		}
	}

	result = append(result, left[i:]...)
	result = append(result, right[j:]...)
	return result
}

// O(N^2) - Quadratic Time: The operation time increases proportionally to the square of the input size.
func (b *BigOExamples) sumCharCodesN2(str string) int {
	sum := 0
	for i := 0; i < len(str); i++ {
		for j := 0; j < 1; j++ {
			sum += int(str[i])
		}
	}
	return sum
}

// O(N^3) - Cubic Time: The operation time increases proportionally to the cube of the input size.
func (b *BigOExamples) sumCharCodesN3(str string) int {
	sum := 0
	for i := 0; i < len(str); i++ {
		for j := 0; j < 1; j++ {
			for k := 0; k < 3; k++ {
				sum += int(str[i])
			}
		}
	}
	return sum
}

// O(2^N) - Exponential Time: The operation time doubles with each additional input element.
func (b *BigOExamples) findFibonacciNumber(n int) int {
	if n <= 1 {
		return n
	}
	return b.findFibonacciNumber(n-1) + b.findFibonacciNumber(n-2)
}

// O(N!) - Factorial Time: The operation time grows factorially with the input size.
func (b *BigOExamples) getNumberOfPermutations(n int) int {
	if n <= 1 {
		return 1
	}
	return n * b.getNumberOfPermutations(n-1)
}

// O(N!) - Factorial Time: The operation time grows factorially with the input size.
func (b *BigOExamples) generatePermutations(nums []int) [][]int {
	var result [][]int
	b.backtrack(nums, 0, &result)
	return result
}

func (b *BigOExamples) backtrack(nums []int, start int, result *[][]int) {
	if start == len(nums) {
		// Create a copy of the current permutation
		perm := make([]int, len(nums))
		copy(perm, nums)
		*result = append(*result, perm)
		return
	}

	for i := start; i < len(nums); i++ {
		// Swap
		nums[start], nums[i] = nums[i], nums[start]
		// Backtrack
		b.backtrack(nums, start+1, result)
		// Swap back
		nums[start], nums[i] = nums[i], nums[start]
	}
} 