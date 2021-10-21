#include "Character.h"
#include "scott_pilgrim.h"
#include <iostream>
#include <string>

using namespace std;

scott_pilgrim::scott_pilgrim()
{
	name = "Scott Pilgrim";
	ID = -1;	// This ID needs to be properly assigned later.
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

scott_pilgrim::scott_pilgrim(string character_name, int character_number)
{
	name = character_name;
	ID = character_number;
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

virtual int scott_pilgrim::special_attack()
{
	return 0;//information about special attack damage here
}