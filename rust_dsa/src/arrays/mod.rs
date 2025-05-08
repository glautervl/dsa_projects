pub mod linear_search; 

pub fn run_array_examples() {
    println!("Running array examples");

    // Arrays examples
    let arr = (1..=20).collect::<Vec<_>>();
    let target = 3;
    let mut breaks = vec![false; 20];
    for i in 17..breaks.len() {
        breaks[i] = true;
    }
    println!("Rust - Arrays - O(1) - Constant Time: {:?}", linear_search::constant_operation(&arr));
    println!("Rust - Arrays - O(N) - Linear Search: {:?}", linear_search::linear_search(&arr, target));
    println!("Rust - Arrays - O(logN) - Binary Search: {:?}", linear_search::binary_search(&arr, target));
    println!("Rust - Arrays - O(sqrt(N)) - Two Crystal Balls: {:?}", linear_search::two_crystal_balls(&breaks));

}