#ifndef CHARACTER_H__
#define CHARACTER_H__

#include <string>

class Character
{
public:
	Character();
	Character(std::string character_name, int character_number);
	std::string name;
	int ID;
	int hitpoints;
	int heavy_recharge_time;
	int special_recharge_time;
	
};

#endif
