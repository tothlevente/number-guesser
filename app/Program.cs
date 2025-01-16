using System;

namespace NumberGuessingGame
{
    class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int secretNumber = random.Next(1, 101);
            int guess = 0;
            int attempts = 0;

            Console.WriteLine("Guessing Game!");
            Console.WriteLine("The computer has thought of a number between 1 and 100.");
            Console.WriteLine("Try to guess it!");

            while (guess != secretNumber)
            {
                Console.Write("Your guess: ");
                string? input = Console.ReadLine();
                if (input == null)
                {
                    Console.WriteLine("Input cannot be null. Please enter a valid number.");
                    continue;
                }

                if (int.TryParse(input, out guess))
                {
                    attempts++;

                    if (guess < secretNumber)
                    {
                        Console.WriteLine("The secret number is higher.");
                    }
                    else if (guess > secretNumber)
                    {
                        Console.WriteLine("The secret number is lower.");
                    }
                    else
                    {
                        Console.WriteLine($"Congratulations, you guessed the number in {attempts} attempts!");
                    }
                }
                else
                {
                    Console.WriteLine("Please enter a valid number.");
                }
            }
        }
    }
}