#include "Character.h"
#include "dirty_harry.h"
#include <iostream>
#include <string>

using namespace std;

dirty_harry::scott_pilgrim()
{
	name = "Dirty Harry";
	ID = -1;	// This ID needs to be properly assigned later.
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

dirty_harry::dirty_harry(string character_name, int character_number)
{
	name = character_name;
	ID = character_number;
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

virtual int dirty_harry::special_attack()
{
	return 0;
}