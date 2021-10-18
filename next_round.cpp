#include <iostream>
#include <string>
#include <time.h>
#include "Character.h"
#include "Move.h"

using namespace std;

bool next_round(Character User, Character Opponent)
{
	bool win_or_lose = true;

	cout << "This fight is between " << User.name << " and " << Opponent.name << endl << endl;

	while (User.hitpoints >= 0 && Opponent.hitpoints >= 0)
	{
		Move* User_Move = new Move; // Create UserMove.
		Move* Opponent_Move = new Move; // Create OpponenetMove.
		
		User_Move->move_menu(User);

		cout << endl;

		User_Move->select_move(User);
		Opponent_Move->computer_move(Opponent);
		cout << User.name << " attacked with " << User_Move->move_type << " and " << Opponent.name << " attacked with " << Opponent_Move->computer_move_type << "." << endl; 
		cout << "Information here about hitpoints." << endl << endl; // UPDATE THIS LINE

		delete User_Move;	// Delete UserMove for next attack.
	}
	
	// We need to write lots and lots of code HERE!

	return win_or_lose;
}
