//
// Created by ostatidie on 8/20/25.
//

#ifndef CASINO_NUMBER_GUESSING_GAME_CASINOGAME_H
#define CASINO_NUMBER_GUESSING_GAME_CASINOGAME_H
#include <cstdlib>
#include <ctime>

class CasinoGame {
private:
    int balance;
public:
    CasinoGame(int startingBalance = 100):balance(startingBalance) {
        std::srand(static_cast<unsigned>(std::time(nullptr)));
    }
    void play();

};


#endif //CASINO_NUMBER_GUESSING_GAME_CASINOGAME_H