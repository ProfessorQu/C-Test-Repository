#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL));

    int secretNumber = rand() % 100 + 1;
    int guess;

    while (secretNumber != guess)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < secretNumber)
        {
            std::cout << "Too low!" << std::endl;
        }
        else if (guess > secretNumber)
        {
            std::cout << "Too high!" << std::endl;
        }
    }

    std::cout << "You guessed it!" << std::endl;
}