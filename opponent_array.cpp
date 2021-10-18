#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

Character* opponent_array(Character user, int* random_array)
// This function will return an array of Character names in random order.
{	
	Character* opponents = new Character[4];
	Character temp_opponents[4];
	string all_names[5] = {"Scott Pilgrim", "Tony Montana", "Skinny Pete", "Dirty Harry", "Chuck Norris"};
	string name_array[4];
	string temp_name_array[4];
	int count;

	// The following if/else statements sort the character names into an array.
	if (user.name == "Scott Pilgrim")
	{
		count = 0;
		for (int i = 1; i < 5; i++)
		{
			name_array[count] = all_names[i];
			count++;
		}
		
		for (int i = 0; i < 4; i++)
		{
			temp_opponents[i] = Character(name_array[i], i+1);
		}
	}
	else if (user.name == "Tony Montana")
	{
		count = 1;
		name_array[0] = "Scott Pilgrim";
		for (int i = 2; i < 5; i++)
		{
			name_array[count] = all_names[i];
			count++;
		}
		
		for (int i = 0; i < 4; i++)
		{
			temp_opponents[i] = Character(name_array[i], i+1);
		}
	}
	else if (user.name == "Skinny Pete")
	{
		count = 2;
		name_array[0] = "Scott Pilgrim";
		name_array[1] = "Tony Montana";
		for (int i = 3; i < 5; i++)
		{
			name_array[count] = all_names[i];
			count++;
		}
		
		for (int i = 0; i < 4; i++)
		{
			temp_opponents[i] = Character(name_array[i], i+1);
		}
	}
	else if (user.name == "Dirty Harry")
	{
		for (int i = 0; i < 3; i++)
		{
			name_array[i] = all_names[i];
		}
		name_array[3] = "Chuck Norris";

		for (int i = 0; i < 4; i++)
		{
			temp_opponents[i] = Character(name_array[i], i+1);
		}
	}
	else if (user.name == "Chuck Norris")
	{
		for (int i = 0; i < 4; i++)
		{
			name_array[i] = all_names[i];
		}

		for (int i = 0; i < 4; i++)
		{
			temp_opponents[i] = Character(name_array[i], i+1);
		}
	}

	// Using the name_array, we now sort the characters into a temporary array
	// using the randomly generated numbers.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == random_array[j])
			{
				temp_name_array[i] = name_array[j];
			}
		}
	}

	// Save temp information back into name_array.
	for (int i = 0; i < 4; i++)
	{
		name_array[i] = temp_name_array[i];
	}

	// Sort characters into corresponding order in opponents array.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (temp_opponents[j].ID == random_array[i])
			{
				opponents[i] = temp_opponents[j];
			}
		}
	}


	return opponents;
}
