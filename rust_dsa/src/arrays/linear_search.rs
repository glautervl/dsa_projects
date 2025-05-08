pub fn constant_operation(arr: &[i32]) -> Option<i32> {
    arr.get(0).copied()
}

pub fn linear_search(arr: &[i32], target: i32) -> Option<usize> {
    arr.iter().position(|&x| x == target)
}

pub fn binary_search(arr: &[i32], target: i32) -> Option<i32> {
    let mut left = 0;
    let mut right = arr.len().wrapping_sub(1);
    while left <= right {
        let mid = (left + right) / 2;
        if arr[mid] == target {
            return Some(arr[mid]);
        } else if target < arr[mid] {
            if mid == 0 { break; }
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    None
}

pub fn two_crystal_balls(breaks: &[bool]) -> Option<usize> {
    let jmp_amount = (breaks.len() as f64).sqrt() as usize;
    let mut i = jmp_amount;
    while i < breaks.len() {
        if breaks[i] {
            break;
        }
        i += jmp_amount;
    }
    let start = i.saturating_sub(jmp_amount);
    for j in start..breaks.len() {
        if breaks[j] {
            return Some(j);
        }
    }
    None
} 