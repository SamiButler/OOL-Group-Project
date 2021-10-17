#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

extern int* generate_random_array();
extern Character* opponent_array(Character user, int* random_array);

#define PRINT(x) cout << x << " "


int main()		// This file tests whether the random_opponents_array
				// will return different results each time the program runs.
				// The program assumes the User Character has been correctly
				// created.
{
	// Initialise varaiables.
	string AllNames[5] = {"Scott Pilgrim", "Tony Montana" "Skinny Pete",
						  "Dirty Harry", "Chuck Norris"};
	string UserName = AllNames[0];
	Character Test_User = Character(UserName, 0);

	// Test 1
	Character* opponents_1 = new Character[4];
	int* random_array_1 = new int[4];
	random_array_1 = generate_random_array();
	opponents_1 = opponent_array(Test_User, random_array_1);

	cout << "Generation 1: ";

	for (int i = 0; i < 4; i++)
	{
		PRINT(opponents_1[i].name);
	}
	
	cout << endl;
	
	// Test 2
	Character* opponents_2 = new Character[4];
	int* random_array_2 = new int[4];
	random_array_2 = generate_random_array();
	opponents_2 = opponent_array(Test_User, random_array_2);

	cout << "Generation 2: ";

	for (int i = 0; i < 4; i++)
	{
		PRINT(opponents_2[i].name);
	}
	
	cout << endl;

	// Test 3
	Character* opponents_3 = new Character[4];
	int* random_array_3 = new int[4];
	random_array_3 = generate_random_array();
	opponents_3 = opponent_array(Test_User, random_array_3);

	cout << "Generation 3: ";

	for (int i = 0; i < 4; i++)
	{
		PRINT(opponents_3[i].name);
	}
	
	cout << endl;


	// Assessing the results:
	int counter = 0;

	for (int i = 0; i < 4; i++)
	{
		if (opponents_1[i].name == opponents_2[i].name && opponents_1[i].name == opponents_3[i].name)
		{
			counter++;
		}
	}

	(counter == 4)?(cout << "Test failed!"):(cout << "Test successful!");
	cout << endl;

	delete[] random_array_1;
	delete[] random_array_2;
	delete[] random_array_3;
	delete[] opponents_1;
	delete[] opponents_2;
	delete[] opponents_3;

	return 0;
}
