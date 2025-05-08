use rust_dsa::bigo::big_o::*;

#[test]
fn test_constant_operation() {
    assert_eq!(constant_operation(&[1, 2, 3]), Some(1));
    assert_eq!(constant_operation(&[]), None);
}

#[test]
fn test_binary_search() {
    let arr = [1, 2, 3, 4, 5];
    assert_eq!(binary_search(&arr, 3), Some(2));
    assert_eq!(binary_search(&arr, 6), None);
}

#[test]
fn test_linear_sum() {
    assert_eq!(linear_sum(&[1, 2, 3, 4]), 10);
    assert_eq!(linear_sum(&[]), 0);
}

#[test]
fn test_merge_sort() {
    let arr = [3, 1, 4, 1, 5];
    assert_eq!(merge_sort(&arr), vec![1, 1, 3, 4, 5]);
}

#[test]
fn test_sum_char_codes_n2() {
    assert_eq!(sum_char_codes_n2("ab"), ('a' as i32 + 'b' as i32) * 2);
}

#[test]
fn test_sum_char_codes_n3() {
    assert_eq!(sum_char_codes_n3("ab"), ('a' as i32 + 'b' as i32) * 4);
}

#[test]
fn test_find_fibonacci_number() {
    assert_eq!(find_fibonacci_number(0), 0);
    assert_eq!(find_fibonacci_number(1), 1);
    assert_eq!(find_fibonacci_number(5), 5);
}

#[test]
fn test_get_number_of_permutations() {
    assert_eq!(get_number_of_permutations(0), 1);
    assert_eq!(get_number_of_permutations(3), 6);
}

#[test]
fn test_generate_permutations() {
    let perms = generate_permutations(&[1, 2, 3]);
    assert_eq!(perms.len(), 6);
    assert!(perms.contains(&vec![1, 2, 3]));
    assert!(perms.contains(&vec![1, 3, 2]));
    assert!(perms.contains(&vec![2, 1, 3]));
    assert!(perms.contains(&vec![2, 3, 1]));
    assert!(perms.contains(&vec![3, 1, 2]));
    assert!(perms.contains(&vec![3, 2, 1]));
} 