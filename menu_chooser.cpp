// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main() 
{
	enum difficulty {EASY, NORMAL, HARD};
	
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	difficulty myDifficulty;
	cout << "Choice: ";
	cin >> myDifficulty;

	switch (myDifficulty)
	{
		case 1:	
			cout << "You picked Easy.\n";
			break;
		case 2:	
			cout << "You picked Normal.\n";
			break;
		case 3:	
			cout << "You picked Hard.\n";
			break;
		default:
			cout << "You made an illegal choice.\n";
	}

    return 0;
}