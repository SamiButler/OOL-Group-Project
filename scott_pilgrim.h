#ifndef SCOTT_PILGRIM__
#define SCOTT_PILGRIM__

#include <string>
#include "Character.h"

class scott_pilgrim : public Character

{
public:
	scott_pilgrim();
	scott_pilgrim(string character_name, int character_number);
	std::string name;
	int ID;
	int hitpoints;
	int heavy_recharge_time;
	int special_recharge_time;
	virtual int special_attack();

};

#endif