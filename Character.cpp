#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character(string character_name, int character_ID)
{
	if (character_ID == 0)				
	{									// This if-statement sets up the
		for (int i = 0; i < 4; i++)		// character ID array and is made
		{								// when the user selects their character.
			ID_array[i] = i;
		}
	}

	name = character_name;
	ID = character_ID;
	hitpoints = 100;
	stun_counter = 0;
}

int Character::get_hitpoints()
{
	return hitpoints;
}

int Character::get_stun_counter()
{
	return stun_counter;
}
