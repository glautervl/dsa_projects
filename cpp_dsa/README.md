# C++ DSA (Data Structures and Algorithms)

This project is a C++ implementation of various data structures and algorithms, focusing on demonstrating different time complexities (Big O notation) and modern C++ features.

## Project Structure

```
cpp_dsa/
├── include/               # Header files
│   └── dev/
│       └── dsa/
│           └── bigo/
│               └── BigOExamples.hpp
├── src/                  # Source files
│   ├── main/
│   │   └── cpp/
│   │       └── dev/
│   │           └── dsa/
│   │               ├── RunApp.cpp
│   │               └── bigo/
│   │                   └── BigOExamples.cpp
│   └── test/
│       └── cpp/
│           └── dev/
│               └── dsa/
│                   └── bigo/
│                       └── BigOExamplesTest.cpp
├── build/               # Build artifacts
├── CMakeLists.txt      # CMake configuration
└── README.md           # This file
```

## Prerequisites

- CMake 3.14 or higher
- C++17 compatible compiler (GCC 8+, Clang 5+, or MSVC 2019+)
- Git (for downloading dependencies)
- Make or Ninja (build system)

## Building the Project

1. Create and enter build directory:

```bash
mkdir -p build && cd build
```

2. Configure the project:

```bash
cmake ..
```

3. Build the project:

```bash
make
# or with Ninja
ninja
```

## Running the Application

```bash
# From the build directory
./algorithm2025
```

## Running Tests

```bash
# From the build directory
./algorithm2025_tests
```

## Big O Examples

The project includes examples of different time complexities:

- O(1) - Constant Time
  - Array access
  - Hash table operations
  - Stack/Queue operations

- O(log N) - Logarithmic Time
  - Binary search
  - Balanced tree operations
  - Heap operations

- O(N) - Linear Time
  - Linear search
  - Array traversal
  - Linked list operations

- O(N log N) - Linearithmic Time
  - Merge sort
  - Quick sort
  - Heap sort

- O(N²) - Quadratic Time
  - Bubble sort
  - Selection sort
  - Insertion sort

- O(N³) - Cubic Time
  - Matrix multiplication
  - 3 nested loops

- O(2^N) - Exponential Time
  - Recursive Fibonacci
  - Tower of Hanoi
  - Subset generation

- O(N!) - Factorial Time
  - Permutations
  - Traveling Salesman (brute force)
  - N-Queens (brute force)

## Project Organization

- `include/`: Header files
  - Public interfaces
  - Class declarations
  - Type definitions

- `src/main/cpp/`: Source files
  - Implementation files
  - Main application code
  - Algorithm implementations

- `src/test/cpp/`: Test files
  - Unit tests
  - Integration tests
  - Performance tests

## Development

The project follows modern C++ best practices:

- C++17 features
- RAII principles
- Strong type safety
- Exception safety
- Smart pointers
- Move semantics
- Range-based for loops
- Auto type deduction
- Lambda expressions

## Testing

The project uses Google Test framework for comprehensive testing:

- Unit tests for each algorithm
- Edge case testing
- Performance benchmarks
- Memory leak detection
- Exception testing

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.
