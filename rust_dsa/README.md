# Rust DSA (Data Structures and Algorithms)

This project is a Rust implementation of various data structures and algorithms, focusing on demonstrating different time complexities (Big O notation) and Rust's unique features like ownership, borrowing, and lifetimes.

## Project Structure

```
rust_dsa/
├── src/                    # Source code
│   ├── main.rs            # Main application entry point
│   ├── lib.rs             # Library code
│   └── bigo/              # Big O complexity examples
├── tests/                 # Integration tests
├── benches/              # Benchmark tests
├── Cargo.toml            # Project manifest
└── README.md             # This file
```

## Prerequisites

- Rust 1.75 or later
- Cargo (Rust's package manager)

## Building and Running

1. Build the project:

```bash
cargo build
```

2. Run the application:

```bash
cargo run
```

## Running Tests

Run all tests:

```bash
cargo test
```

Run tests with coverage:

```bash
cargo tarpaulin
```

## Running Benchmarks

```bash
cargo bench
```

## Big O Examples

The project includes examples of different time complexities:

- O(1) - Constant Time
- O(log N) - Logarithmic Time
- O(N) - Linear Time
- O(N log N) - Linearithmic Time
- O(N²) - Quadratic Time
- O(N³) - Cubic Time
- O(2^N) - Exponential Time
- O(N!) - Factorial Time

Each example is implemented with detailed comments explaining the time complexity and implementation details, with special attention to Rust's memory safety features.

## Project Organization

- `src/`: Contains all source code
  - `main.rs`: Application entry point
  - `lib.rs`: Library code and public API
  - `bigo/`: Implementation of various time complexity examples

- `tests/`: Integration tests
  - Tests that span multiple modules
  - End-to-end tests

- `benches/`: Benchmark tests
  - Performance measurements
  - Comparison tests

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.
