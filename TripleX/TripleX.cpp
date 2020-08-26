#include <iostream>
#include <ctime>
using namespace std;


int main() 
{
	int difficulty = 1;
	int maxDifficulty = 10;

	// Print welcome messages to the terminal
	cout << "You are a secret agent breaking into a secure server room...\n";
	cout << "Enter the correct code to continue...\n" << endl;

	const int CodeA = 4, CodeB = 3, CodeC = 2;
	const int CodeSum = CodeA + CodeB + CodeC, CodeProduct = CodeA * CodeB * CodeC;

	// Print the sum and product of the numbers
	cout << "\t- There are three numbers in the code.\n";
	cout << "\t- The sum of the three numbers is " << CodeSum << ".\n";
	cout << "\t- The product of the three numbers is " << CodeProduct << "." << endl;

	int PlayerGuess;

	return 0;
}