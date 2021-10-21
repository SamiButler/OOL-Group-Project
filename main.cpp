#include <iostream>
#include <string>
#include "Character.h"
#include "Move.h"
#include "scott_pilgrim.h"

using namespace std;

extern string select_character();
extern int* generate_random_array();
extern Character* opponent_array(Character user, int* random_array);
extern bool ready();
extern bool next_round(Character User, Character Opponent);


int main()				// So far use 'make check_intro' to test this.
{
	bool ready_to_continue = false;
	bool victory = true;

	cout << endl << "WELCOME TO ~STREET BRAWLER~!!" << endl;
	cout << "A text-based fighting game featuring some of your favourite characters!" << endl;
	cout << "It's your job to defeat your opponents in brutal hand-to-hand combat, one by one." << endl;
	cout << "GOOD LUCK!" << endl <<endl;

	cout << "Choose from the following fighters:" << endl;

	cout << endl << "1 Scott Pilgrim" << endl << "2 Tony Montana" << endl << 
	"3 Skinny Pete" << endl << "4 Dirty Harry" << endl << "5 Chuck Norris" << 
	endl << endl;	

	string UserName = select_character();
	int UserID = 0;

	// Create user character.
	if (UserName == "Scott Pilgrim"){
		scott_pilgrim User;
		User.Character(UserName, 1);
	}
	else
	{
		Character User = Character(UserName, 0);
	}

	// Generate random number array that will correspond to
	// the IDs and hence order that you fight the opponents in.
	// This then helps create the opponents_array.
	int* random_array = generate_random_array();
	Character* opponents_array = opponent_array(User, random_array);
	delete[] random_array;

	// Prompt user if ready to continue?
	cout << "Now that you have selected your fighter, the game will be begin shortly. Enter 1 to proceed." << endl;
	ready_to_continue = ready();
	cout << endl;


	// This section is where the main stage of the game occurs: the
	// fights against the other characters.
	for (int match = 0; match < 4; match++)
	{
		victory = next_round(User, opponents_array[match]);
		if (victory == false)
		{
			cout << "Game over - you died!! Better luck next time." << endl;
			delete[] opponents_array;
			return 0;
		}
	}

	delete[] opponents_array;

	cout << endl;
	return 0;
}
