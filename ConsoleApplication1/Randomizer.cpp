#include "stdafx.h"
#include "Randomizer.h"
#include <ctime> // Necessary for the 'std::rand() line



//Randomizer::Instance().generateRandomNumber(7) use it like this

Randomizer::~Randomizer()
{
}



int Randomizer::generateRandomRow(int rowMaximumValue)
{
	//std::srand((unsigned int)time(NULL));

	int newRowValue = std::rand() % rowMaximumValue;
	return newRowValue;
}

int Randomizer::generateRandomCollumn(int collumnMaximumValue)
{
	std::srand((unsigned int)time(NULL));

	int newCollumnValue = std::rand() % collumnMaximumValue;
	return newCollumnValue;
}

int Randomizer::generateRandomNumber(int maximumNumber)
{
	//std::srand((unsigned int)time(NULL));

	//TODO: Check random number generator
	//Generate a random number between 0 and 9
	//NOTE!! INCLUDING 9, EXCLUDING 10!
	return std::rand() % maximumNumber;
}

