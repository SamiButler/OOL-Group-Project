#include <iostream>
#include <string>
#include <time.h>
#include "Character.h"
#include "Move.h"

using namespace std;

extern int do_move(int move_type, int counter_move_type);
extern int light_attack(int counter_move_type);
extern int defend(int counter_move_type);
extern int heavy_attack(int counter_move_type);

bool next_round(Character User, Character Opponent)
{
	bool win_or_lose = true;

	cout << "This fight is between " << User.name << " and " << Opponent.name << endl << << endl << "GOOD LUCK!" << endl << endl;

	while (User.hitpoints >= 0 && Opponent.hitpoints >= 0)
	{
		Move* User_Move = new Move; // Create UserMove.
		Move* Opponent_Move = new Move; // Create OpponenetMove.
		
		User_Move->move_menu(User);

		cout << endl;

		User_Move->select_move(User);
		Opponent_Move->computer_move(Opponent);

		User.hitpoints = User.hitpoints - do_move(User_Move->move_type, Opponent_Move->computer_move_type);
		Opponent.hitpoints = Opponent.hitpoints - do_move(Opponent_Move->computer_move_type, User_Move->move_type);
		
		cout << User.name << " attacked with " << User_Move->move_type << " and " << Opponent.name << " attacked with " << Opponent_Move->computer_move_type << "." << endl; 
		cout << User.name << ": " << User.hitpoints << "hp" << endl;
		cout << Opponent.name << ": " << Opponent.hitpoints << "hp" << endl << endl; // UPDATE THIS LINE

		delete User_Move;	// Delete UserMove for next attack.
	}
	
	// We need to write lots and lots of code HERE!

	return win_or_lose;
}
