#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction(int Difficulty)
{
	// Print welcome messages to the terminal
	cout << "\n=====================================================================\n";
	cout << "= You are a secret agent breaking into a level " << Difficulty;
	cout << " secure server room... =\n";
	cout << "= Enter the correct code to continue...                                =\n";
	cout << "========================================================================\n";
}


bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

	const int CodeA = rand() % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

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
		cout << "\n---- Well done agent! You have extracted a file. Keep going! ----\n";
		return true;
	}
	else
	{
		cout << "\n---- You entered the wrong code! Try again! ----\n";
		return false;
	}
}




int main() 
{
	srand(time(NULL)); // Create new random sequence based on time of day

	int LevelDifficulty = 1;
	const int MaxDifficulty = 3;

	while (LevelDifficulty <= MaxDifficulty) // loop all the levels until all levels completed 
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		cin.clear(); // Clears any errors
		cin.ignore(); // Discards the buffer

		if (bLevelComplete)
		{
			LevelDifficulty++;
		}
	}

	cout << "\n Great work agent you are in the system!!\n";

	return 0;
}