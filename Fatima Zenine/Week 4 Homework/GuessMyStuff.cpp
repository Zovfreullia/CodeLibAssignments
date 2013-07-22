// Demonstrates the use of functions in a guessing game
// Fatima Zenine Homework 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> lovedList;
vector<string>:: iterator iter;

void inputChoices();
void inputList();
void printBlanks();
void guessLoop();
bool gameLoop = true;
 
int main()
{
	inputChoices();
	inputList();
	printBlanks();
	guessLoop();

	return 0;
}


void inputChoices(){
	cout << "Please enter five things you love the most: \n\n";
	for (int i = 0; i < 5; i++){
		string lovies;
		cin >> lovies;
		lovedList.push_back(lovies);
	}
}

void inputList(){
	cout << "\n\nHere is what you have so far: \n\n";
	for ( iter = lovedList.begin(); iter != lovedList.end(); ++iter){
		cout << *iter << endl;
	}
}

void printBlanks(){
	for (int i = 0; i < 40; ++i){
		cout << endl;
	}
}

void guessLoop(){
	int numGuesses = 5;
	int numTurns = 5;
	cout << "Now, it is your partner's turn to guess those 5 things you love the most!" << endl << endl;
	cout << "WARNING: Your guesses are case sensitive!" << endl;
	cout << "Please enter your five guesses: " << endl;
	string guesses;
	
	while (gameLoop == true){
		for (int i = 0; i < 5; ++i){
			cout << "\nYou have " << numGuesses << " things left to guess  and " << numTurns << " turns left." << endl;
			cin >> guesses;
			iter = find(lovedList.begin(), lovedList.end(), guesses);  
			if (iter != lovedList.end()) 
			{
				numGuesses--;
				numTurns--;
				cout << "\nDamn right skippy!" <<endl;}
			else {
				numTurns--;
				cout << "\nYou owe them a drink." << endl;
		}

		if (numGuesses > 1 && numTurns == 0) {
			cout << "Game over!" << endl;}
			gameLoop = false;
		} if (numGuesses == 0 && numTurns == 0) {
			
			cout << "Awww you remembered all the things!" << endl;
			gameLoop = false;}
	}

}