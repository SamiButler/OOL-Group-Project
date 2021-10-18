#ifndef MOVE_H_
#define MOVE_H_

#include<string>
#include "Character.h"

class Move : public Character
{
public:
	Move();              		 // a type parameter will be used to determine the move's recharge times as 
								 // well as how the move reacts to its opponent (eg if type is 3, 
								 // depending on how we choose to proceed
	                             // a subclass for every move type or use a variable to define each type
	std::string move_type;
	int computer_move_type;
	void move_menu(Character User);
    void select_move(Character User);
    void computer_move(Character Opponent);

	~Move();
};

#endif
	
	