mod arrays;
mod bigo;

use arrays::run_array_examples;
use bigo::run_bigo_examples;

fn main() {
    println!("");
    // Run Big O examples
    run_bigo_examples();
    println!("");
    // Run array examples
    run_array_examples();

} 