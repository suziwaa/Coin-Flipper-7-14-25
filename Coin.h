#ifndef COIN
#define COIN
#include <iostream>
#include <string>
#include <ctime>
using namespace::std;
class Coin {
private:
	bool isHeads;
	const int centVal;
	int headCount;
	int tailCount;

public:
	Coin();
	Coin(int centVal);
	const bool isItHeads();
	const string getSideUp();
	const int getCentValue();
	void flip();

};
#endif