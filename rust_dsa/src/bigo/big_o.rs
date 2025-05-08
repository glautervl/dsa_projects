// O(1) - Constant Time
pub fn constant_operation(n: &[i32]) -> Option<i32> {
    n.get(0).copied()
}

// O(log N) - Logarithmic Time (Binary Search)
pub fn binary_search(n: &[i32], target: i32) -> Option<usize> {
    let mut low = 0;
    let mut high = n.len().wrapping_sub(1);
    while low <= high {
        let mid = (low + high) / 2;
        if n[mid] == target {
            return Some(mid);
        }
        if n[mid] < target {
            low = mid + 1;
        } else {
            if mid == 0 { break; }
            high = mid - 1;
        }
    }
    None
}

// O(N) - Linear Time
pub fn linear_sum(n: &[i32]) -> i32 {
    n.iter().sum()
}

// O(N log N) - Merge Sort
pub fn merge_sort(arr: &[i32]) -> Vec<i32> {
    if arr.len() <= 1 {
        return arr.to_vec();
    }
    let mid = arr.len() / 2;
    let left = merge_sort(&arr[..mid]);
    let right = merge_sort(&arr[mid..]);
    merge(&left, &right)
}

fn merge(left: &[i32], right: &[i32]) -> Vec<i32> {
    let mut result = Vec::with_capacity(left.len() + right.len());
    let mut i = 0;
    let mut j = 0;
    while i < left.len() && j < right.len() {
        if left[i] <= right[j] {
            result.push(left[i]);
            i += 1;
        } else {
            result.push(right[j]);
            j += 1;
        }
    }
    result.extend_from_slice(&left[i..]);
    result.extend_from_slice(&right[j..]);
    result
}

// O(N^2) - Quadratic Time
pub fn sum_char_codes_n2(s: &str) -> i32 {
    let mut sum = 0;
    let chars: Vec<i32> = s.chars().map(|c| c as i32).collect();
    for _ in 0..chars.len() {
        for &code in &chars {
            sum += code;
        }
    }
    sum
}

// O(N^3) - Cubic Time
pub fn sum_char_codes_n3(s: &str) -> i32 {
    let mut sum = 0;
    let chars: Vec<i32> = s.chars().map(|c| c as i32).collect();
    for _ in 0..chars.len() {
        for _ in 0..chars.len() {
            for &code in &chars {
                sum += code;
            }
        }
    }
    sum
}

// O(2^N) - Exponential Time (Recursive Fibonacci)
pub fn find_fibonacci_number(n: u32) -> u32 {
    match n {
        0 => 0,
        1 => 1,
        _ => find_fibonacci_number(n - 1) + find_fibonacci_number(n - 2),
    }
}

// O(N!) - Factorial Time (Factorial)
pub fn get_number_of_permutations(n: u32) -> u32 {
    match n {
        0 | 1 => 1,
        _ => n * get_number_of_permutations(n - 1),
    }
}

// O(N!) - Factorial Time (Generate all permutations)
pub fn generate_permutations(nums: &[i32]) -> Vec<Vec<i32>> {
    let mut result = Vec::new();
    let mut nums = nums.to_vec();
    backtrack(&mut nums, 0, &mut result);
    result
}

fn backtrack(nums: &mut [i32], start: usize, result: &mut Vec<Vec<i32>>) {
    if start == nums.len() {
        result.push(nums.to_vec());
        return;
    }
    for i in start..nums.len() {
        nums.swap(start, i);
        backtrack(nums, start + 1, result);
        nums.swap(start, i);
    }
} 