#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

Character* opponent_array(Character user, int* random_array)
// This function will return an array of Character names in random order.
{	
	Character* opponents = new Character[4];
	string all_names[5] = {"Scott Pilgrim", "Tony Montana", "Skinny Pete", "Dirty Harry", "Chuck Norris"};
	string name_array[4];
	int count;

	if (user.name == "Scott Pilgrim")
	{
		for (int i = 0; i < 4; i++)
		{
			if (all_names[i] == "Scott Pilgrim")
			{
				count++;
			}
			name_array[i] = all_names[count];
			count++;
		}
	}

	return opponents;
}



