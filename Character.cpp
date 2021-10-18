#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character()
{
	name = "null";
	ID = -1;	// This ID needs to be properly assigned later.
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 0;
}

Character::Character(string character_name, int character_number)
{
	name = character_name;
	ID = character_number;
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 0;
}
