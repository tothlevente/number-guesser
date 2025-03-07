# Number guesser 🎈

This project is a simple console-based game where the computer generates a random secret number, and the player tries to guess it. The game provides feedback to the player, indicating whether their guess is too high or too low, until they correctly guess the number.

## Available scripts:

### Compile:

- `g++ guessing_game.cpp -o guessing_game`

### Run:

- `./guessing_game` (on Linux/macOS) or `guessing_game.exe` (on Windows)

## Learning Fundamentals

It's a great beginner project for learning basic programming concepts like:

- Random number generation.
- Input and output operations.
- Loops (specifically, the `while` loop).
- Conditional statements (`if`, `else if`, `else`).
- Basic data types (integers, strings).
- String to integer conversion.

## Functionality

1.  **Number Generation:**
    - The program starts by generating a random secret number within a specified range (in this case, 1 to 100).
2.  **User Interaction:**
    - The program displays a welcome message and instructions.
    - It prompts the player to enter their guess.
    - The player's input is read from the console.
3.  **Input Validation:**
    - The program checks if the input is a valid number.
    - If the input is invalid, it displays an error message and prompts the player to enter a valid number again.
4.  **Guess Evaluation:**
    - The program compares the player's guess to the secret number.
    - If the guess is correct:
      - The program displays a congratulatory message, revealing the number of attempts it took.
      - The game ends.
    - If the guess is too high:
      - The program displays a message indicating that the secret number is lower.
    - If the guess is too low:
      - The program displays a message indicating that the secret number is higher.
5.  **Looping:**
    - The game continues to prompt the player for guesses until they correctly guess the secret number.
    - The amount of guesses is counted.

## How it Works?

- **Random Number Generation:**
  - The `std::rand()` function generates a pseudo-random number.
  - `std::srand(std::time(nullptr))` seeds the random number generator so that it produces a different sequence of random numbers each time the program is run.
  - The modulo operator (`%`) and addition are used to limit the random number to the desired range (1-100).
- **Input and Output:**

  - `std::cout` is used to display text on the console.
  - `std::cin` is used to read input from the console.
  - `std::getline()` reads a complete line of input.

- **String to Integer Conversion:**

  - `std::stringstream` is used to safely convert the input string to an integer.

- **Looping and Conditional Logic:**
  - The `while` loop continues as long as the player's guess is not equal to the secret number.
  - `if`, `else if`, and `else` statements are used to compare the guess to the secret number and provide appropriate feedback.

## License:

- This project is licensed under Unlicense.

For more information please visit the license files.
