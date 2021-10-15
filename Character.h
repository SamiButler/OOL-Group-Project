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
	int stun_counter;
};

#endif
