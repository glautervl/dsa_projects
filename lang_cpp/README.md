# Algorithm2025 C++ Project

This project demonstrates various Big O complexity examples implemented in C++.

## Project Structure

```
lang_cpp/
├── CMakeLists.txt
├── include/
│   └── dev/
│       └── dsa/
│           └── bigo/
│               └── BigOExamples.hpp
├── src/
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
└── build/
```

## Requirements

- CMake 3.14 or higher
- C++17 compatible compiler
- Google Test (automatically downloaded by CMake)

## Building the Project

```bash
# Create and enter build directory
mkdir -p build && cd build

# Configure and build
cmake ..
make

# Run the main program
./algorithm2025

# Run tests
./algorithm2025_tests
```

## Features

The project demonstrates various Big O complexity examples:

- O(1) - Constant Time
- O(log N) - Logarithmic Time
- O(N) - Linear Time
- O(N log N) - Linearithmic Time
- O(N²) - Quadratic Time
- O(N³) - Cubic Time
- O(2^N) - Exponential Time
- O(N!) - Factorial Time

## Testing

The project uses Google Test framework for unit testing. All algorithms are thoroughly tested with various input cases.

## Best Practices

- Modern C++ features (C++17)
- RAII principles
- Strong type safety
- Comprehensive unit tests
- Clear code organization
- Proper memory management
- Exception safety 