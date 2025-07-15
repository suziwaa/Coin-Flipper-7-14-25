#include "Coin.h"
#include <iostream>
#include <string>

Coin::Coin():centVal(1){
	isHeads = true;
}
Coin::Coin(int centVal):centVal(centVal){
	isHeads = true;
}
const bool Coin::isItHeads(){
	return isHeads;
}
const string Coin::getSideUp(){
	if (isHeads == true)
	{
		return "Heads";
	}
	else
	{
		return "Tails";
	}

}
const int Coin::getCentValue(){
	return centVal;
}
void Coin::flip() {
	int randomInRange = 1 + (rand() % (2 - 1 + 1));
	if (randomInRange == 1) {
		isHeads = true;
	}
	else {
		isHeads = false;
	}
}