pub mod big_o;

pub fn run_bigo_examples() {
    println!("Running Big O examples");
    // Big O examples
    let test_arr = [1, 2, 3, 4, 5];
    let fibonacci_number = 5;
    let number_of_permutations = 3;
    let permutations = [1, 2, 3];
    let test_str = "abc";
    let unsorted_arr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5];
    let target = 5;
    println!("Rust - BigO - O(1) - Constant Time: {:?}", big_o::constant_operation(&test_arr));
    println!("Rust - BigO - O(log N) - Logarithmic Time: {:?}", big_o::binary_search(&test_arr, target));
    println!("Rust - BigO - O(N) - Linear Time: {}", big_o::linear_sum(&test_arr));
    println!("Rust - BigO - O(N log N) - Log Linear Time: {:?}", big_o::merge_sort(&unsorted_arr));
    println!("Rust - BigO - O(N^2) - Quadratic Time: {}", big_o::sum_char_codes_n2(test_str));
    println!("Rust - BigO - O(N^3) - Cubic Time: {}", big_o::sum_char_codes_n3(test_str));
    println!("Rust - BigO - O(2^N) - Exponential Time: {}", big_o::find_fibonacci_number(fibonacci_number));
    println!("Rust - BigO - O(N!) - Factorial Time: {}", big_o::get_number_of_permutations(number_of_permutations));
    println!("Rust - BigO - O(N!) - Factorial Time: {:?}", big_o::generate_permutations(&permutations));
}