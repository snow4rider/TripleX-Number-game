#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction(int Difficulty)
{
	// Print welcome messages to the terminal
	cout << "\n****************************************************************\n";
	cout << "* You are a secret agent breaking into a level " << Difficulty;
	cout << " secure server room... *\n";
	cout << "* Enter the correct code to continue...                        *\n";
	cout << "****************************************************************\n";
}


bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

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
	int LevelDifficulty = 1;
	int MaxDifficulty = 3;

	while (LevelDifficulty < MaxDifficulty)
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		cin.clear(); // Clears any errors
		cin.ignore(); // Discards the buffer

		if (bLevelComplete)
		{
			++LevelDifficulty;
		}
	}

	cout << "You are in the system!!\n";

	return 0;
}