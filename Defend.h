#ifndef DEFEND_H_
#define DEFEND_H_

#include<string>


class Defend : public Move
{
public:

Defend();
int player_effect(int cpuMoveType);


~Defend();
	
};

#endif