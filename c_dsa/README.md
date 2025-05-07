# C DSA Project

This project is a C implementation of various Data Structures and Algorithms.

## Project Structure

```
c_dsa/
├── include/     # Header files
├── src/         # Source files
├── tests/       # Test files
├── build/       # Build artifacts
├── CMakeLists.txt
└── Makefile
```

## Prerequisites

- CMake (version 3.10 or higher)
- CUnit (for testing)
- GCC or Clang compiler
- Make

## Building the Project

To build the project, run:

```bash
make
```

## Running Tests

To run the tests, execute:

```bash
make test
```

## Cleaning Build Files

To clean build artifacts:

```bash
make clean
```

## Project Organization

The project follows standard C conventions:

- Header files (.h) are placed in the `include` directory
- Implementation files (.c) are placed in the `src` directory
- Test files are placed in the `tests` directory

## Contributing

1. Create a new branch for your feature
2. Make your changes
3. Add tests for new functionality
4. Submit a pull request
