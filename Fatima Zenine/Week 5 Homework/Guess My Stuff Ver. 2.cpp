//Demonstrates References in a Guessing Game
// Fatima Zenine Homework

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string>lovedList;
vector<string>guessedList;
vector<string>:: iterator iter;

void rdisplayList(const vector<string> & lovedList);
void rdisplayList3 (vector <string> & guessedList);
void printBlanks();
bool gameLoop = true;

int main()
{
	cout << "Enter five things you love: " << endl;
	for (int i = 0; i < 5; ++i){
	string lovedStuff;
	cin >> lovedStuff;
	lovedList.push_back(lovedStuff);}
	cout << "\n\nHere is your list :) Ssshhhh... Don't tell them to your friend. " << endl;
	rdisplayList (lovedList);
	rdisplayList3 (guessedList);
	return 0;
}

void rdisplayList (const vector<string>& showList){
	for (vector<string>::const_iterator iter = showList.begin();
		iter !=showList.end(); ++iter){
			cout << *iter << endl;
	}

void printBlanks();{
	cout << "Please input 'YES' to end your turn." << endl;
	string ans;
	cin >> ans;
	for (int i = 0; i < 40; ++i){
		cout << endl;}
	}
}
void rdisplayList3(vector<string>& guessList){ 
	int numTurns = 5;
	int numGuesses = 5;
	string guesses;
	cout << "Guess your friend's list <3" << endl;
	while (gameLoop == true){
		for (int i = 0; i < 5; ++i){
		cin >> guesses;
		guessedList.push_back(guesses);
		iter = find(lovedList.begin(), lovedList.end(), guesses);  
			if (iter != lovedList.end()){
				-- numTurns;
				-- numGuesses;
				cout << "You guessed right! You have: " << numGuesses << " guesses left! " << numTurns << " turns to go!" << endl;}
			else {
				--numTurns;
				cout << "Oops, try again! You have: " << numGuesses << " guesses left! " << numTurns << " turns to go!" << endl;}
		if (numTurns == 0 &&  numGuesses > 1){
			cout << "\n\nYou lost." <<endl;
			cout << "You guessed: " <<endl;
			for (vector<string>:: iterator iter = guessedList.begin();
				iter !=guessedList.end(); ++iter){
				cout << *iter << endl;}
			cout << "\n\nYou would have won if you had guessed all of these things: " << endl;
			for (vector<string>:: iterator iter =lovedList.begin();
			iter !=lovedList.end(); ++iter){
				cout << *iter << endl;}
			gameLoop = false;}
		else if (numTurns == 0 && numGuesses ==0){
			cout << "\n\nYou won.\n\n" << endl;
			cout << "You guessed: " << endl;
			for (vector<string>:: iterator iter = guessedList.begin();
				iter !=guessedList.end(); ++iter){
				cout << *iter << endl;
			gameLoop = false;}
	}
	}
}
}