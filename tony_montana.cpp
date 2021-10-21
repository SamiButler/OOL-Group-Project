#include "Character.h"
#include "tony_montana.h"
#include <iostream>
#include <string>

using namespace std;

tony_montana::tony_montana()
{
	name = "Tony Montana";
	ID = -1;	// This ID needs to be properly assigned later.
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

tony_montana::tony_montana(string character_name, int character_number)
{
	name = character_name;
	ID = character_number;
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

virtual int tony_montana::special_attack()
{
	return 0;
}