//Dr. Who Assignment

#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string>inventory;
vector<string>::iterator iter;



bool gameLoop = true;

int numItems = 0;
const int MAX_TRIES = 10;
string item = " ";
string playerInput = " ";
string playerName = " ";
int tries = 0;
int main()
{
	cout << "Please input your name: ";
	cin >> playerName;
	cout << "\n\nCongratulations, " << playerName << " you have been selected as a guest traveler to Tardis.\n\n";
	cout << "Please select a maximum of ten items to add in your suitcase inventory.\n";
	cout << "**NOTE: YOU ONLY HAVE 10 TRIES**\n\n";

	//Starting entering item

	cout << "Enter item: ";
	cin >> item;
	inventory.push_back(item);
	++tries;

	//Starting Game Loop
	
        
	 while (gameLoop)
    {
        if(item == item) // Giving them the option
		{
		cout << " \n\n -  -  -  -  -  -  -  -  -  - \n\t";
        cout << "\nDo you wish to 'remove' or 'add' an item? ";
		cin >> playerInput;
		}

		if (playerInput == "add")
		{
		cout << "\n\nEnter the item you wish to add: "; //Adding an item
		cin >> item;
		inventory.push_back(item);
		++tries;
		cout  << "\nYou can carry "<< (10 - inventory.size()) << " more items.";
		cout << "\nAnd you have " << (MAX_TRIES - tries) << " tries left.\n\n";
		cout << "SUITCASE: \n";
		{	for(iter = inventory.begin(); iter != inventory.end(); iter++)
			cout << *iter << " \n";
		}
	
	 }
		else if (playerInput == "remove") // Removing an item
		{
		cout <<"\n\nEnter the item you wish to remove: ";
		cin >> item;
		iter = find(inventory.begin(), inventory.end(), item);  
		if (iter != inventory.end()) 
	    inventory.erase(iter);
		++tries;
		cout  << "\nYou can carry "<< (10 - inventory.size()) << " more items.";
		cout << "\nAnd you have " << (MAX_TRIES - tries) << " tries left.\n\n";
		cout << "SUITCASE: \n";
			{	for(iter = inventory.begin(); iter != inventory.end(); iter++)
			cout << *iter << " \n";
			}
		}
		
		
		if ((inventory.size() == 10))
	{
		cout << "\n\nYou have reached the maximum capacity for your suitcase! Enjoy your stay at Tardis " << playerName << "!\n\n";
		gameLoop = false;
	}
		else if ((tries == 10))
		{
			cout << "\n\nYour 10 tries are up! Off you go to Tardis, " << playerName << "!\n\n";
			gameLoop = false;
		}
	
}
		
	 }


