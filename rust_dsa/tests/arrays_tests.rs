use rust_dsa::arrays::linear_search::*;

#[test]
fn test_constant_operation() {
    assert_eq!(constant_operation(&[1, 2, 3]), Some(1));
    assert_eq!(constant_operation(&[]), None);
}

#[test]
fn test_linear_search() {
    assert_eq!(linear_search(&[1, 2, 3], 2), Some(1));
    assert_eq!(linear_search(&[1, 2, 3], 4), None);
}

#[test]
fn test_binary_search() {
    assert_eq!(binary_search(&[1, 2, 3, 4, 5], 3), Some(3));
    assert_eq!(binary_search(&[1, 2, 3, 4, 5], 6), None);
}

#[test]
fn test_two_crystal_balls() {
    let mut breaks = vec![false; 20];
    for i in 17..breaks.len() {
        breaks[i] = true;
    }
    assert_eq!(two_crystal_balls(&breaks), Some(17));
} 