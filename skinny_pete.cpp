#include "Character.h"
#include "skinny_pete.h"
#include <iostream>
#include <string>

using namespace std;

skinny_pete::skinny_pete()
{
	name = "Skinny Pete";
	ID = -1;	// This ID needs to be properly assigned later.
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

skinny_pete::skinny_pete(string character_name, int character_number)
{
	name = character_name;
	ID = character_number;
	hitpoints = 100;
	heavy_recharge_time = 0;
	special_recharge_time = 1;
}

virtual int skinny_pete::special_attack()
{
	return 0;
}