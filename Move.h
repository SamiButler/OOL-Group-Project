#ifndef MOVE_H_
#define MOVE_H_

#include<string>
#include "Character.h"

class Move : public Character
{
public:
	Move();
	int move_type;
	int computer_move_type;
	void move_menu(Character User);
    void select_move(Character User);
    void computer_move(Character Opponent);
    void attack(Character character1, Character character2);
};

#endif
	
	