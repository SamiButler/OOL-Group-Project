#include <iostream>
#include <string>
#include "Character.h"
#include "Move.h"

using namespace std;

int main()
// This program tests that hitpoints are removed correctly from Opponent when
// light attack is used, depending on the opponent's attack.
{
	string AllNames[5] = {"Scott Pilgrim", "Tony Montana", "Skinny Pete",
						  "Dirty Harry", "Chuck Norris"};
	// Choose User and Opponent characters.
	string UserName = AllNames[0];
	string OpponentName = AllNames[1];

	// Create opponents.
	Character* User = new Character(UserName, 0);
	Character* Opponent = new Character(OpponentName, 1);

	cout << endl << "User is " << User->name << " and Opponent is " << Opponent->name << "." << endl << endl;

	Move* User_Move = new Move; // Create UserMove.
	Move* Opponent_Move = new Move; // Create OpponentMove.



	delete User;
	delete Opponent;
	delete User_Move;
	delete Opponent_Move;
	
	return 0;
}
