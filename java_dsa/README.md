# Java DSA (Data Structures and Algorithms)

This project is a Java implementation of various data structures and algorithms, focusing on demonstrating different time complexities (Big O notation) and Java's object-oriented features.

## Project Structure

```
java_dsa/
├── src/                    # Source code
│   ├── main/
│   │   ├── java/          # Java source files
│   │   │   ├── Main.java  # Main application entry point
│   │   │   └── bigo/      # Big O complexity examples
│   │   └── resources/     # Resource files
│   └── test/
│       └── java/          # Test files
├── target/                # Compiled files
├── pom.xml               # Maven configuration
└── README.md            # This file
```

## Prerequisites

- Java 17 or later
- Maven 3.8 or later

## Building and Running

1. Build the project:

```bash
mvn clean install
```

2. Run the application:

```bash
mvn exec:java -Dexec.mainClass="dev.dsa.RunDSA"
```

## Running Tests

Run all tests:

```bash
mvn test
```

Run tests with coverage:

```bash
mvn verify
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

Each example is implemented with detailed comments explaining the time complexity and implementation details, with special attention to Java's collections framework and best practices.

## Project Organization

- `src/main/java/`: Contains all Java source code
  - `Main.java`: Application entry point
  - `bigo/`: Implementation of various time complexity examples

- `src/test/java/`: Test files
  - Unit tests
  - Integration tests
  - Performance tests

- `target/`: Compiled files
  - Generated from source
  - Ready for distribution

## Development

The project uses several development tools:

- Maven for build management
- JUnit for testing
- Checkstyle for code style checking
- JaCoCo for code coverage

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.
