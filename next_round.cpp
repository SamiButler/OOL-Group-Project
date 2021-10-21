#include <iostream>
#include <string>
#include <time.h>
#include "Character.h"
#include "Move.h"
#include "characters.h"

using namespace std;

extern int do_move(int move_type, int counter_move_type);
extern int light_attack(int counter_move_type);
extern int defend(int counter_move_type);
extern int heavy_attack(int counter_move_type);

bool next_round(Character User, Character Computer)
{
	bool win_or_lose = true;

	cout << "This fight is between " << User.name << " and " << Computer.name << endl << endl << "GOOD LUCK!" << endl << endl;

	Character Opponent;
	if (Computer.name == "Scott Pilgrim"){
		scott_pilgrim Opponent;
	}
	else if (Computer.name == "Tony Montana"){
		tony_montana Opponent;
	}
	else if (Computer.name == "Skinny Pete"){
		skinny_pete Opponent;
	}
	else if (Computer.name == "Dirty Harry"){
		dirty_harry Opponent;
	}
	else if (Computer.name == "Chuck Norris"){
		chuck_norris Opponent;
	}

	while (User.hitpoints > 0 && Opponent.hitpoints > 0)
	{
		Move* User_Move = new Move; // Create UserMove.
		Move* Opponent_Move = new Move; // Create OpponenetMove.
		
		User_Move->move_menu(User);

		cout << endl;

				User_Move->select_move(User);				// LINES 29 - 33 SHOULD NOT EXIST AFTER MOVING THIS INFO TO THE MOVE CLASS.
				Opponent_Move->computer_move(Opponent);		// INSTEAD ONE WE JUST CALL User_Move->attack(User, Opponent) and Opponent_Move->(Opponent, User).
				if (User_Move->move_type == 4){
					Opponent.hitpoints = Opponent.hitpoints - User.special_attack();
				}
				User.hitpoints = User.hitpoints - do_move(User_Move->move_type, Opponent_Move->computer_move_type);

				if (Opponent_Move->move_type == 4){
					User.hitpoints = User.hitpoints - Opponent.special_attack();
				}
				Opponent.hitpoints = Opponent.hitpoints - do_move(Opponent_Move->computer_move_type, User_Move->move_type);
		
		cout << User.name << " attacked with " << User_Move->move_type << " and " << Opponent.name << " attacked with " << Opponent_Move->computer_move_type << "." << endl; 
		
		if (User.hitpoints > 0 && Opponent.hitpoints > 0)				// Both players hitpoints > 0.
		{
		cout << User.name << ": " << User.hitpoints << "hp" << endl;
		cout << Opponent.name << ": " << Opponent.hitpoints << "hp" << endl << endl;
		}
		else if (User.hitpoints > 0 && Opponent.hitpoints <= 0)			// Player > 0, Computer < 0.
		{
		cout << User.name << ": " << User.hitpoints << "hp" << endl;
		cout << Opponent.name << ": 0hp" << endl << endl;
		}
		else if (User.hitpoints <= 0 && Opponent.hitpoints > 0)			// Player < 0, Computer > 0.
		{
		cout << User.name << ": 0hp" << endl;
		cout << Opponent.name << ": " << Opponent.hitpoints << "hp" << endl << endl;
		win_or_lose = false;	
		}
		else if (User.hitpoints <= 0 && Opponent.hitpoints <=0)			// When both players die on the same turn,
		{																// the user will win by 1hp.
		cout << User.name << ": 1hp" << endl;
		cout << Opponent.name << ": 0hp" << endl << endl;
		}

		delete User_Move;	// Delete UserMove for next attack.
	}

	return win_or_lose;
}
