#include "CasinoGame.h"

#include <iostream>

void CasinoGame::play() {
    std::cout << "Welcome to the Casino Guessing Game!\n";
    std::cout << "Your starting balance: $" << balance << "\n";

    while (balance > 0) {
        int bet;
        std::cout << "\nEnter your bet (0 to quit): ";
        std::cin >> bet;

        if (bet > balance) {
            std::cout << "You don’t have enough money!\n";
            continue;
        } else if (bet < 0) {
            std::cout << "You can’t bet negative money!\n";
            continue;
        } else if (bet == 0) {
            break;
        }

        int difficulty;
        std::cout << "Choose difficulty (1 = Easy[1-10], 2 = Medium[1-50], 3 = Hard[1-100]): ";
        std::cin >> difficulty;

        if (difficulty < 1 || difficulty > 3) {
            std::cout << "Invalid difficulty!\n";
            continue;
        }

        balance -= bet;
        int maxRange = (difficulty == 1 ? 10 : (difficulty == 2 ? 50 : 100));
        int secret = 1 + std::rand() % maxRange;
        int guess;
        std::cout << "Guess a number between 1 and " << maxRange << ": ";
        std::cin >> guess;

        if (guess == secret) {
            std::cout << "Congratulations! You guessed it right!\n";
            int multiplier = (maxRange == 10 ? 2 : (maxRange == 50 ? 5 : 10));
            int winnings = bet * multiplier;
            balance += winnings;
            std::cout << "You won $" << winnings 
                      << ". Current balance: $" << balance << "\n";
        } else {
            std::cout << "Sorry, the winning number was " << secret << ".\n";
            std::cout << "You lost $" << bet 
                      << ". Current balance: $" << balance << "\n";
        }
    }

    std::cout << "\nGame over! Final balance: $" << balance << "\n";
}
