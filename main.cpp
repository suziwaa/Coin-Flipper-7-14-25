//Flips coins

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Coin.h"
#include "Game.h"
using namespace::std;

int headCount;
int tailCount;


int main()
{
    srand(time(0)); //Needed to seed numb gen

   /* Coin myCoin;

    for (int i = 0; i < 20; ++i) {
        myCoin.flip();

        if (myCoin.isItHeads()) {
            ++headCount;
        }
        else {
            ++tailCount;
        }
        */
        Game myGame;
        myGame.playGame();
    }
   // cout << "Heads: " << headCount << endl << "Tails: " << tailCount;


