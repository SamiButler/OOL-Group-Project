#include "Character.h"
#include "chuck_norris.h"
#include <iostream>
#include <string>

using namespace std;

chuck_norris::chuck_norris()
{
	name = "Chuck Norris";
	ID = -1;	// This ID needs to be properly assigned later.
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

chuck_norris::chuck_norris(string character_name, int character_number)
{
	name = character_name;
	ID = character_number;
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

virtual int chuck_norris::special_attack()
{
	return 0;
}