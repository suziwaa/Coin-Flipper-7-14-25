#ifndef GAME_H
#define GAME_H

#include "Coin.h"
#include <iostream>

class Game {
private:
    Coin* coins;
    int numberOfCoins;
    double targetBalance;
    int totalScore;
    int rounds;

    void printFlipResults();
    void flipCoins();

public:
    Game();           
    Game(double target);     
    ~Game();

    void printScore();
    int getRounds();
    int getScore();
    void playGame();
};

#endif
