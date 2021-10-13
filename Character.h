#ifndef CHARACTER_H__
#define CHARACTER_H__

#include <string>

class Character
{
public:
	Character(std::string character_name, int character_ID);
	std::string name;
	int ID;
	int hitpoints;
	int stun_counter;
	int get_hitpoints();
	int get_stun_counter();

private:
	int ID_array[4];
	int ID_counter;
};

#endif

