#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secretNumber = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Guessing Game!" << std::endl;
    std::cout << "The computer has thought of a number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" << std::endl;

    while (guess != secretNumber) {
        std::cout << "Your guess: ";
        std::string input;
        std::getline(std::cin, input);

        if (input.empty()) {
            std::cout << "Input cannot be empty. Please enter a valid number." << std::endl;
            continue;
        }

        std::stringstream ss(input);
        if (ss >> guess) {
            attempts++;

            if (guess < secretNumber) {
                std::cout << "The secret number is higher." << std::endl;
            } else if (guess > secretNumber) {
                std::cout << "The secret number is lower." << std::endl;
            } else {
                std::cout << "Congratulations, you guessed the number in " << attempts << " attempts!" << std::endl;
            }
        } else {
            std::cout << "Please enter a valid number." << std::endl;
        }
    }

    return 0;
}