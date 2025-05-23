# Python DSA (Data Structures and Algorithms)

This project is a Python implementation of various data structures and algorithms, focusing on demonstrating different time complexities (Big O notation) and Python's unique features.

## Project Structure

```
python_dsa/
├── src/                    # Source code
│   ├── __init__.py        # Package initialization
│   ├── main.py            # Main application entry point
│   └── bigo/              # Big O complexity examples
├── tests/                 # Test files
├── requirements.txt       # Project dependencies
├── setup.py              # Package setup file
└── README.md             # This file
```

## Prerequisites

- Python 3.9 or later
- pip (Python package manager)

## Installation

1. Create a virtual environment (recommended):

```bash
python -m venv venv
source venv/bin/activate  # On Windows: venv\Scripts\activate
```

2. Install dependencies:

```bash
pip install -r requirements.txt
```

## Building and Running

1. Install the package in development mode:

```bash
pip install -e .
```

2. Run the application:

```bash
python src/main.py
```

## Running Tests

Run all tests:

```bash
pytest
```

Run tests with coverage:

```bash
pytest --cov=src tests/
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

Each example is implemented with detailed comments explaining the time complexity and implementation details, with special attention to Python's built-in data structures and standard library features.

## Project Organization

- `src/`: Contains all source code
  - `main.py`: Application entry point
  - `bigo/`: Implementation of various time complexity examples
  - `__init__.py`: Package initialization

- `tests/`: Test files
  - Unit tests
  - Integration tests
  - Performance tests

## Development

The project uses several development tools:

- pytest for testing
- black for code formatting
- flake8 for linting
- mypy for type checking

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.
