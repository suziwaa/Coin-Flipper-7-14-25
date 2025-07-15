#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() {
	numberOfCoins = 3;
	coins = new Coin[numberOfCoins]{ Coin(5), Coin(10), Coin(25) };
	targetBalance = 100;
	totalScore = 0;
	rounds = 0;
}
	Game::~Game() {
		delete[] coins;
	}

	void Game::flipCoins() {
		for (int i = 0; i < numberOfCoins; i++) {
			coins[i].flip();
			if (coins[i].isItHeads()) {
				totalScore += coins[i].getCentValue();
			}
		}
		rounds++;
	}

	void Game::printFlipResults() {
		string labels[] = { "Nickel", "Dime", "Quarter" };
		for (int i = 0; i < numberOfCoins; i++) {
			cout << labels[i] << ": " << coins[i].getSideUp() << endl;
		}
	}


	void Game::printScore() {
		cout << "Current Score: " << totalScore << endl;
	

		cout << "Current Round: " << rounds << endl;
	}


	int Game::getRounds() {
		return rounds;
	}

	int Game::getScore() {
		return totalScore;
	}


	void Game::playGame() {
		while (totalScore < targetBalance) {
			flipCoins();
			printFlipResults();
			printScore();
		}
		
			cout << "Congrtulations! You won in " << rounds << " rounds!";
		
	}


