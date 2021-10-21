#ifndef CHARACTER_H__
#define CHARACTER_H__

#include <string>

class Character
{
protected:
	int hitpoints;
	int heavy_recharge_time;
	int special_recharge_time;
public:
	void set_values(int hitpoints, int heavy_recharge_time, int special_recharge_time);
	virtual int special_attack() = 0;

};

#endif
