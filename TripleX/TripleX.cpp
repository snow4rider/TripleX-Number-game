#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction()
{
	// Print welcome messages to the terminal
	cout << "\n****************************************************************\n";
	cout << "* You are a secret agent breaking into a secure server room... *\n";
	cout << "* Enter the correct code to continue...                        *\n";
	cout << "****************************************************************\n";
}


bool PlayGame()
{
	PrintIntroduction();

	const int CodeA = 4, CodeB = 3, CodeC = 2;
	const int CodeSum = CodeA + CodeB + CodeC, CodeProduct = CodeA * CodeB * CodeC;

	// Print the sum and product of the numbers
	cout << "\t- There are three numbers in the code.\n";
	cout << "\t- The sum of the three numbers is " << CodeSum << ".\n";
	cout << "\t- The product of the three numbers is " << CodeProduct << ".\n";

	int GuessA, GuessB, GuessC;
	cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	// check if the player guessed correctly 
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		return true;
	}
	else
	{
		return false;
	}
}




int main() 
{
	int Difficulty = 1;
	int MaxDifficulty = 3;

	while (Difficulty < MaxDifficulty)
	{
		bool bLevelComplete = PlayGame();
		cin.clear(); // Clears any errors
		cin.ignore(); // Discards the buffer
		Difficulty++;
	}

	cout << "You are in the system!!\n";

	return 0;
}