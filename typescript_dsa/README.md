# TypeScript DSA (Data Structures and Algorithms)

This project is a TypeScript implementation of various data structures and algorithms, focusing on demonstrating different time complexities (Big O notation) and TypeScript's type system features.

## Project Structure

```
typescript_dsa/
├── src/                    # Source code
│   ├── index.ts           # Main entry point
│   ├── types/             # TypeScript type definitions
│   └── bigo/              # Big O complexity examples
├── tests/                 # Test files
├── dist/                  # Compiled JavaScript files
├── package.json           # Project configuration
├── tsconfig.json          # TypeScript configuration
└── README.md             # This file
```

## Prerequisites

- Node.js 18 or later
- npm or yarn package manager

## Installation

```bash
# Install dependencies
npm install
# or
yarn install
```

## Building and Running

1. Build the project:

```bash
npm run build
# or
yarn build
```

2. Run the application:

```bash
npm start
# or
yarn start
```

## Running Tests

Run all tests:

```bash
npm test
# or
yarn test
```

Run tests with coverage:

```bash
npm run test:coverage
# or
yarn test:coverage
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

Each example is implemented with detailed comments explaining the time complexity and implementation details, with special attention to TypeScript's type system and best practices.

## Project Organization

- `src/`: Contains all source code
  - `index.ts`: Application entry point
  - `types/`: TypeScript type definitions and interfaces
  - `bigo/`: Implementation of various time complexity examples

- `tests/`: Test files
  - Unit tests
  - Integration tests
  - Type tests

- `dist/`: Compiled JavaScript files
  - Generated from TypeScript source
  - Ready for distribution

## Development

The project uses several development tools:

- ESLint for code linting
- Prettier for code formatting
- Jest for testing
- TypeScript for type checking

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.
