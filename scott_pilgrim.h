#ifndef SCOTT_PILGRIM_H
#define SCOTT_PILGRIM_H

#include <string>
#include "Character.h"

class scott_pilgrim : public Character

{
public:
	/*scott_pilgrim(string character_name, int character_number);
	std::string name;
	int ID;
	int hitpoints;
	int heavy_recharge_time;
	int special_recharge_time;*/
	int special_attack();

};

#endif