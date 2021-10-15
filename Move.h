#ifndef MOVE_H_
#define MOVE_H_

#include<string>

class Move
{
public:
	Move();          		 // a type parameter will be used to determine the move's recharge times as 
	int heavy_recharge_time; //well as how the move reacts to its opponent (eg if type is 3, 
	int special_recharge_time;
	
	~Move();
};

#endif
	
	