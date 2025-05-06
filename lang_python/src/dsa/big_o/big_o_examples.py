

# O(1) - Constant time
def constant_time_example(arr: list[int]) -> int:
    return arr[0]

# O(log N) - Logarithmic time (binary search)
def logaritimic_binary_search(arr: list[int], target: int) -> int:
    low = 0
    high = len(arr) - 1

    while(low <= high):
        mid = (low + high) // 2
        if(arr[mid] == target):
            return mid
        elif(arr[mid] < target):
            low = mid + 1
        else:
            high = mid - 1

    return -1

# O(N log N) - Linearithmic time (merge sort)
def merge_sort(arr: list[int]) -> list[int]:
    if(len(arr) <= 1):
        return arr;

    # split the array into two halves
    mid = len(arr) // 2
    # sort the left half
    left = merge_sort(arr[:mid])
    # sort the right half
    right = merge_sort(arr[mid:])
    # merge the two halves
    return merge(left, right)

# O(N log N) - Linearithmic time (merge sort)
def merge(left: list[int], right: list[int]) -> list[int]:
    result = []
    leftIdx = rightIdx = 0

    # merge the two halves
    while(leftIdx < len(left) and rightIdx < len(right)):

        # if the left half is smaller than the right half, 
        # add the left half to the result  
        if(left[leftIdx] < right[rightIdx]):
            result.append(left[leftIdx])
            leftIdx += 1

        # if the right half is smaller than the left half, 
        # add the right half to the result
        else:
            result.append(right[rightIdx])
            rightIdx += 1

    # add the remaining elements to the result
    result.extend(left[leftIdx:])

    # add the remaining elements to the result
    result.extend(right[rightIdx:])

    # return the result
    return result


# O(n) - Linear Time
def linear_sum(arr: list[int]) -> int:
    sum = 0
    for i in range(len(arr)):
        sum += arr[i]
    return sum

# O(n^2) - Quadratic Time
def sum_char_codes_n2(n: str) -> int:
    sum = 0
    for i in range(len(n)):
        for j in range(len(n)):
            sum += i * j
    return sum

# O(n^3) - Cubic Time
def sum_char_codes_n3(n: str) -> int:
    sum = 0
    for i in range(len(n)):
        for j in range(len(n)):
            for k in range(len(n)):
                sum += i * j * k
    return sum


# O(2^n) - Exponential Time
def fibonacci(n: int) -> int:
    if(n <= 1):
        return n
    return fibonacci(n-1) + fibonacci(n-2)

# O(N!) - Factorial Time
def get_number_of_permutations(n: int) -> int:
    if(n <= 1):
        return 1
    return n * get_number_of_permutations(n-1)

# O(N!) - Factorial Time
def generate_permutations(nums: list[int]) -> list[list[int]]:
    # declare the result array
    result = []
    # declare the length of the array
    n = len(nums)

    # backtrack function
    def backtrack(start: int):
        # if the start is equal to the length of the array, 
        # add the current permutation to the result
        if(start == n):
            result.append(nums[:]) # copy the current permutation
            return

        # iterate through the array
        for i in range(start, n):
            # swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # recurse on the next start
            backtrack(start + 1)
            # swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]

    # start the backtracking
    backtrack(0)
    # return the result
    return result

# Run the examples
def run_big_o_examples():
    print("Running Big O examples...")

    testStr = "abc"
    testArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    unsortedArr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
    numberOfPermutations = 3
    permutations = [1, 2, 3]
    fibonacciNumber = 10
    target = 5
    print("Python - O(1) - Constant Time:", constant_time_example(testArr))
    print("Python - O(log N) - Logarithmic Time:", logaritimic_binary_search(testArr, target))
    print("Python - O(N) - Linear Time:", linear_sum(testArr))
    print("Python - O(N log N) - Log Linear Time:", merge_sort(unsortedArr))
    print("Python - O(N^2) - Quadratic Time:", sum_char_codes_n2(testStr))
    print("Python - O(N^3) - Cubic Time:", sum_char_codes_n3(testStr))
    print("Python - O(2^N) - Exponential Time:", fibonacci(fibonacciNumber))
    print("Python - O(N!) - Factorial Time:", get_number_of_permutations(numberOfPermutations))
    print("Python - O(N!) - Factorial Time:", generate_permutations(permutations))

# If the script is run directly, run the examples
if __name__ == "__main__":
    run_big_o_examples()
