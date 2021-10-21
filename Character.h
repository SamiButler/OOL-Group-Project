#ifndef CHARACTER_H__
#define CHARACTER_H__

#include <string>

class Character
{
protected:
	int hitpoints;
	int ID;
	int heavy_recharge_time;
	int special_recharge_time;
public:
	void set_values(int char_hitpoints, int char_ID, int char_heavy_recharge_time, int char_special_recharge_time);
	virtual int special_attack() = 0;

};

#endif
