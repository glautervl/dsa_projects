package bigo

import (
	"sort"
	"testing"
)

func TestConstantTimeExample(t *testing.T) {
	bigO := NewBigOExamples()
	arr := []int{1, 2, 3, 4, 5}
	expected := 1
	result := bigO.constantTimeExample(arr)
	if result != expected {
		t.Errorf("constantTimeExample() = %d; want %d", result, expected)
	}
}

func TestBinarySearch(t *testing.T) {
	bigO := NewBigOExamples()
	arr := []int{1, 2, 3, 4, 5}
	target := 4
	expected := 3
	result := bigO.binarySearch(arr, target)
	if result != expected {
		t.Errorf("binarySearch() = %d; want %d", result, expected)
	}
}

func TestLinearSum(t *testing.T) {
	bigO := NewBigOExamples()
	arr := []int{1, 2, 3, 4, 5}
	expected := 15
	result := bigO.linearSum(arr)
	if result != expected {
		t.Errorf("linearSum() = %d; want %d", result, expected)
	}
}

func TestMergeSort(t *testing.T) {
	bigO := NewBigOExamples()
	arr := []int{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}
	expected := []int{1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9}
	result := bigO.mergeSort(arr)
	if len(result) != len(expected) {
		t.Errorf("mergeSort() length = %d; want %d", len(result), len(expected))
		return
	}
	for i := range result {
		if result[i] != expected[i] {
			t.Errorf("mergeSort()[%d] = %d; want %d", i, result[i], expected[i])
		}
	}
}

func TestSumCharCodesN2(t *testing.T) {
	bigO := NewBigOExamples()
	str := "abc"
	expected := 294 // 97 + 98 + 99 = 294 (ASCII values)
	result := bigO.sumCharCodesN2(str)
	if result != expected {
		t.Errorf("sumCharCodesN2() = %d; want %d", result, expected)
	}
}

func TestSumCharCodesN3(t *testing.T) {
	bigO := NewBigOExamples()
	str := "abc"
	expected := 882 // (97 + 98 + 99) * 3 = 882 (ASCII values)
	result := bigO.sumCharCodesN3(str)
	if result != expected {
		t.Errorf("sumCharCodesN3() = %d; want %d", result, expected)
	}
}

func TestFindFibonacciNumber(t *testing.T) {
	bigO := NewBigOExamples()
	n := 5
	expected := 5
	result := bigO.findFibonacciNumber(n)
	if result != expected {
		t.Errorf("findFibonacciNumber() = %d; want %d", result, expected)
	}
}

func TestGetNumberOfPermutations(t *testing.T) {
	bigO := NewBigOExamples()
	n := 3
	expected := 6
	result := bigO.getNumberOfPermutations(n)
	if result != expected {
		t.Errorf("getNumberOfPermutations() = %d; want %d", result, expected)
	}
}

func TestGeneratePermutations(t *testing.T) {
	bigO := NewBigOExamples()
	nums := []int{1, 2, 3}
	expected := [][]int{
		{1, 2, 3},
		{1, 3, 2},
		{2, 1, 3},
		{2, 3, 1},
		{3, 1, 2},
		{3, 2, 1},
	}
	result := bigO.generatePermutations(nums)
	if len(result) != len(expected) {
		t.Errorf("generatePermutations() length = %d; want %d", len(result), len(expected))
		return
	}
	// Sort both slices to ensure order doesn't matter
	sort.Slice(result, func(i, j int) bool {
		for k := range result[i] {
			if result[i][k] != result[j][k] {
				return result[i][k] < result[j][k]
			}
		}
		return false
	})
	sort.Slice(expected, func(i, j int) bool {
		for k := range expected[i] {
			if expected[i][k] != expected[j][k] {
				return expected[i][k] < expected[j][k]
			}
		}
		return false
	})
	for i := range result {
		for j := range result[i] {
			if result[i][j] != expected[i][j] {
				t.Errorf("generatePermutations()[%d][%d] = %d; want %d", i, j, result[i][j], expected[i][j])
			}
		}
	}
} 