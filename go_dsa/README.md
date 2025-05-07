# Go DSA (Data Structures and Algorithms)

This project is a Go implementation of various data structures and algorithms, focusing on demonstrating different time complexities (Big O notation).

## Project Structure

```
go_dsa/
├── bin/                    # Compiled binaries
├── cmd/
│   └── dsa/
│       └── main.go         # Main application entry point
├── internal/
│   └── bigo/
│       ├── bigo.go         # Big O examples implementation
│       └── bigo_test.go    # Unit tests for Big O examples
├── pkg/                    # Public packages (if any)
├── test/                   # Integration tests (if any)
├── go.mod                  # Go module file
└── README.md              # This file
```

## Prerequisites

- Go 1.22 or later

## Building and Running

1. Build the project:

```bash
# Build and place the binary in the bin directory
go build -o bin/run_dsa ./cmd/dsa
```

2. Run the application:

```bash
# Run from the bin directory
./bin/run_dsa
```

## Running Tests

Run all tests:

```bash
go test ./...
```

Run tests with coverage:

```bash
go test -cover ./...
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

Each example is implemented with detailed comments explaining the time complexity and implementation details.

## Project Organization

- `bin/`: Contains compiled binaries
  - Unlike Java's `target` directory, Go binaries are self-contained executables
  - No need for additional runtime or dependencies
  - Can be distributed and run on any compatible system

- `cmd/`: Contains the main applications
  - Each subdirectory is a separate application
  - Main entry points for the project

- `internal/`: Private application code
  - Not importable by other projects
  - Implementation details

- `pkg/`: Public libraries
  - Code that can be imported by other projects
  - Public APIs and utilities

- `test/`: Integration and end-to-end tests
  - Tests that span multiple packages
  - Performance and load tests

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.
