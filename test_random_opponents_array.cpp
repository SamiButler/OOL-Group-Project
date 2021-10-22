#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

extern int* generate_random_array();
extern Character* opponent_array(Character user, int* random_array);


int main()		// This file tests whether the random_opponents_array
				// will return different results each time the program runs.
				// The program assumes the User Character has been correctly
				// created.
{
	// Initialise varaiables.
	string AllNames[5] = {"Scott Pilgrim", "Tony Montana", "Skinny Pete",
						  "Dirty Harry", "Chuck Norris"};
	string UserName = "Scott Pilgrim";
	Character Test_User = Character(UserName, 0);

	// Original array.
	string OriginalArray[4];
	int counter = 0;

	cout << endl << "Original generation: ";

	for (int i = 0; i < 5; i++)
	{
		if (UserName != AllNames[i])
		{
			OriginalArray[counter] = AllNames[i];
			counter++;
		}
	}

	for (int i = 0; i < 4; i++)
	{		
		cout << OriginalArray[i] << " "; 
	}

	cout << endl;

	// Random array.
	Character* opponents = new Character[4];
	int* random_array_1 = new int[4];
	random_array_1 = generate_random_array();
	opponents = opponent_array(Test_User, random_array_1);

	cout << "Random generation: ";

	for (int i = 0; i < 4; i++)
	{
		cout << opponents[i].name << " ";
	}
	
	cout << endl;
	
	counter = 0;

	for (int i = 0; i < 4; i++)
	{
		if (OriginalArray[i] == opponents[i].name)
		{
			counter++;
		}
	}

	if (counter == 4)
	{
		cout << "Test failed! Both arrays are the same! Try again." << endl << endl;
	}
	else
	{
		cout << "Test successful! Both arrays are different." << endl << endl;
	}


	delete[] random_array_1;
	delete[] opponents;


	return 0;
}
