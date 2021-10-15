#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

extern string select_character();
extern int* generate_random_array();
extern Character* opponent_array(Character user, int* random_array);


int main()				// So far use 'make check_intro' to test this.
{
	cout << endl << "THIS IS WHERE THE INTO MESSAGE WILL GO" << endl;

	cout << "Choose from the following characters:" << endl;

	cout << endl << "1 Scott Pilgrim" << endl << "2 Tony Montana" << endl << "3 Skinny Pete" << endl << "4 Dirty Harry" << endl << "5 Chuck Norris" << endl << endl;	

	string UserName = select_character();
	int UserID = 0;

	// Create user character.
	Character User = Character(UserName, 0);

	// Generate random number array that will correspond to
	// the IDs and hence order that you fight the opponents in.
	// This then helps create the opponents_array.
	int* random_array = generate_random_array();
	Character* opponents_array = opponent_array(User, random_array);

	for (int i = 0; i < 4; i++)
	{
		cout << opponents_array[i].name << endl;
	}


	// Delete dynamic arrays from heap and return 0 to exit.
	cout << endl;
	delete[] random_array;
	return 0;
}

