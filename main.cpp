#include <iostream>
#include <string>
#include "Character.h"
#include "Move.h"
#include "characters.h"

using namespace std;

extern string select_character();
extern int* generate_random_array();
extern Character* opponent_array(Character user, int* random_array);
extern bool ready();
extern bool next_round(Character* User, Character Opponent);


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
	// if (UserName == "Scott Pilgrim"){
		Character * User = new Character(UserName, UserID);
	// }
	// else if (UserName == "Tony Montana"){
	// 	tony_montana * User = new tony_montana;
	// }
	// else if (UserName == "Skinny Pete"){
	// 	skinny_pete * User = new skinny_pete;
	// }
	// else if (UserName == "Dirty Harry"){
	// 	dirty_harry * User = new dirty_harry;
	// }
	// else if (UserName == "Chuck Norris"){
	// 	chuck_norris * User = new chuck_norris;
	// }

	// Generate random number array that will correspond to
	// the IDs and hence order that you fight the opponents in.
	// This then helps create the opponents_array.
	int* random_array = generate_random_array();
	Character* opponents_array = opponent_array(*User, random_array);
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
			cout << "Game over - you died!! Better luck next time. PS - you suck." << endl;
			delete[] opponents_array;
			return 0;
		}
		else
		{
			User->hitpoints = 100;
			cout << "Congratulations, you have won this round!" << endl;
		}
	}

	cout << "Nice one - you have beaten all of the opponenets and are now the undisputed king of the streetz. All will bow down to you and kiss your feet. Mwah mwah mwah" << endl;
	cout << endl << "THE END - THANKS FOR PLAYING" << endl;

	delete[] opponents_array;
	delete User;

	cout << endl;
	return 0;
}
