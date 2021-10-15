#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

extern string select_character();
extern int* generate_random_array();

int main()				// So far use 'make check_intro' to test this.
{
	cout << endl << "THIS IS WHERE THE INTO MESSAGE WILL GO" << endl;

	cout << "Choose from the following characters:" << endl;

	cout << endl << "1 Scott Pilgrim" << endl << "2 Tony Montana" << endl << "3 Skinny Pete" << endl << "4 Dirty Harry" << endl << "5 Chuck Norris" << endl << endl;	

	string UserName = select_character();
	int UserID = 0;

	// Create user character.
	Character User = Character(UserName, 0);

	// Un-comment the line below is just testing checking hitpoints. This won't be in the final code.
	cout << UserName << " has " << User.get_hitpoints() << " hitpoints." << endl;

	// Generate random number array that will correspond to
	// the IDs and hence order that you fight the opponents in.
	int* random_array = generate_random_array();

	// Un-comment this code to check the random order array.
	// for (int i = 0; i < 4; i++)
	// {
	// 	cout << random_array[i] << " ";
	// }




	// Delete dynamic arrays from heap and return 0 to exit.
	cout << endl;
	delete[] random_array;
	return 0;
}

