#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

void Character::set_values(int char_hitpoints, int char_ID, int char_heavy_recharge_time, int char_special_recharge_time)
{
	hitpoints = char_hitpoints;
	ID = char_ID;
	heavy_recharge_time = char_heavy_recharge_time;
	special_recharge_time = char_special_recharge_time;
}
