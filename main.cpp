#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

extern string select_character();

int main()
{
	cout << "THIS IS WHERE THE INTO MESSAGE WILL GO" << endl;

	cout << "Choose from the following characters:" << endl;

	cout << endl << "1 Scott Pilgrim" << endl << "2 Tony Montana" << endl << "3 Skinny Pete" << endl << "4 Dirty Harry" << endl << "5 Chuck Norris" << endl << endl;	

	string UserName = select_character();
	int UserID = 0;

	Character User = Character(UserName, 0);

	// The line below is just testing checking hitpoints. This won't be in the final code.
	cout << UserName << " has " << User.get_hitpoints() << " hitpoints." << endl;

	cout << endl;
	return 0;
}

