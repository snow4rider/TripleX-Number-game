#include <iostream>
#include <ctime>
using namespace std;


int main() 
{
	int difficulty = 1;
	int maxDifficulty = 10;

	cout << endl;
	cout << "You are a secret agent breaking into a secure server room...\n";
	cout << "Enter the correct code to continue...\n" << endl;

	int a = 4, b = 3, c = 2, sum = a + b + c, product = a * b * c;

	cout << "The sum of the three numbers is " << sum << ".\n";
	cout << "The product of the three numbers is " << product << "." << endl;


	return 0;
}