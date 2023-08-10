# Ulam Spiral Generator with Miller-Rabin Primality Test

This is a C program that generates and displays an Ulam Spiral using the ASCII characters and utilizes the Miller-Rabin primality test to identify prime numbers.

## Ulam Spiral

The Ulam Spiral is a mathematical pattern formed by arranging numbers in a spiral pattern, where the prime numbers tend to align along diagonal lines. It was named after its discoverer, Stanislaw Ulam. The program provided here creates a visual representation of the Ulam Spiral with prime numbers marked using the 'P' character.

## Miller-Rabin Primality Test

The Miller-Rabin primality test is a probabilistic algorithm used to determine whether a given number is prime. Unlike deterministic tests, the Miller-Rabin test uses randomization to provide a high likelihood of accurately identifying prime numbers. The algorithm runs several iterations, each of which tests whether the number is composite with high probability. By increasing the number of iterations (denoted by parameter `k`), the accuracy of the test can be improved.

## How to Use

1. Clone or download this repository to your local machine.
2. Compile the C program using a C compiler (e.g., GCC).
   ```shell
   gcc ulam_spiral.c -o ulam_spiral -lm
   ```
3. Run the compiled program.
   ```shell
   ./ulam_spiral
   ```
4. Follow the prompts to input the size of the Ulam Spiral (an odd number).

The program will generate and display the Ulam Spiral using the 'P' character to represent prime numbers and spaces for non-prime numbers.

## Customization

You can adjust the number of iterations in the Miller-Rabin primality test by modifying the `k` value within the `miller_rabin` function. Increasing `k` will improve the accuracy of primality testing but might also increase computation time.

## Requirements

- A C compiler (e.g., GCC)
- A system that supports the `__int128` type (for the enhanced version using larger integers)
- Math library (for compiling with `-lm` option, required for `sqrt` function)

## Contribution

Feel free to contribute to this project by improving the code, enhancing the algorithm, or providing additional features. Pull requests are welcome!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


