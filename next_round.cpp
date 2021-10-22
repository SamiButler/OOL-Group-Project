#include <iostream>
#include <string>
#include <time.h>
#include "Character.h"
#include "Move.h"
#include "characters.h"

using namespace std;

extern int do_move(int move_type, int counter_move_type, Character * User);
extern int light_attack(int counter_move_type);
extern int defend(int counter_move_type);
extern int heavy_attack(int counter_move_type);

 bool next_round(Character* User, Character Opponent)
{
	bool win_or_lose = true;

	cout << "This fight is between " << User->name << " and " << Opponent.name << endl << endl << "GOOD LUCK!" << endl << endl;

	while (User->hitpoints > 0 && Opponent.hitpoints > 0)
	{
		Move* User_Move = new Move; // Create UserMove.
		Move* Opponent_Move = new Move; // Create OpponenetMove.
		
		if (User->heavy_recharge_time > 0){
			User->heavy_recharge_time--;
		}

		User_Move->move_menu(*User);

		cout << endl;

		User_Move->select_move(*User);				
		Opponent_Move->computer_move(Opponent);	
		// if (User_Move->move_type == 4){
		// 	Opponent.hitpoints = Opponent.hitpoints - User->special_attack();
		// }
		Opponent.hitpoints = Opponent.hitpoints - do_move(User_Move->move_type, Opponent_Move->computer_move_type, User);

		//if (User->special_attack_recharge > 0){
		//	User->special_attack_recharge--;
		//}
		// if (Opponent_Move->move_type == 4){
		// 	User->hitpoints = User->hitpoints - Opponent.special_attack();
		// }
		User->hitpoints = User->hitpoints - do_move(Opponent_Move->computer_move_type, User_Move->move_type, Opponent);
		
		cout << User->name << " attacked with " << User_Move->move_type << " and " << Opponent.name << " attacked with " << Opponent_Move->computer_move_type << "." << endl; 
		
		if (User->hitpoints > 0 && Opponent.hitpoints > 0)				// Both players hitpoints > 0.
		{
		cout << User->name << ": " << User->hitpoints << "hp" << endl;
		cout << Opponent.name << ": " << Opponent.hitpoints << "hp" << endl << endl;
		}
		else if (User->hitpoints > 0 && Opponent.hitpoints <= 0)			// Player > 0, Computer < 0.
		{
		cout << User->name << ": " << User->hitpoints << "hp" << endl;
		cout << Opponent.name << ": 0hp" << endl << endl;
		}
		else if (User->hitpoints <= 0 && Opponent.hitpoints > 0)			// Player < 0, Computer > 0.
		{
		cout << User->name << ": 0hp" << endl;
		cout << Opponent.name << ": " << Opponent.hitpoints << "hp" << endl << endl;
		win_or_lose = false;	
		}
		else if (User->hitpoints <= 0 && Opponent.hitpoints <=0)			// When both players die on the same turn,
		{																// the user will win by 1hp.
		cout << User->name << ": 1hp" << endl;
		cout << Opponent.name << ": 0hp" << endl << endl;
		}

		delete User_Move;	// Delete UserMove for next attack.
	}

	return win_or_lose;
}
