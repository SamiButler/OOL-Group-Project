#include <iostream>
#include <string>
#include "Character.h"
#include "Move.h"

using namespace std;

extern int do_move(int move_type, int counter_move_type, Character * User);
extern int light_attack(int counter_move_type);
extern int defend(int counter_move_type);
extern int heavy_attack(int counter_move_type);
extern string print_move(int move_type);

int main()
// This program tests that hitpoints are removed correctly from User when
// defend is used, depending on the opponent's attack.
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


	// Test 1.
	Move* User_Move = new Move; // Create UserMove.
	Move* Opponent_Move = new Move; // Create OpponentMove.

	User_Move->move_type = 2;
	Opponent_Move->computer_move_type = 1;

	int user_damage = do_move(Opponent_Move->computer_move_type, User_Move->move_type, User);

	cout << "Test 1: Defend vs Light attack: damage expected to be between 0 and 4 (inclusive)" << endl;
	cout << "Damage inflicted: " << user_damage << endl;
	if (user_damage >= 0 && user_damage <= 4)
	{
		cout << "Test 1 successful!" << endl << endl;
	}
	else
	{
		cout << "Test 1 failed!" << endl << endl;
	}
	// End of test 1.





	// Test 2.
	Move* User_Move2 = new Move; // Create UserMove.
	Move* Opponent_Move2 = new Move; // Create OpponentMove.

	User_Move2->move_type = 2;
	Opponent_Move2->computer_move_type = 2;

	user_damage = do_move(Opponent_Move2->computer_move_type, User_Move2->move_type, User);

	cout << "Test 2: Defend vs Defend: damage expected to be 0" << endl;
	cout << "Damage inflicted: " << user_damage << endl;
	if (user_damage == 0)
	{
		cout << "Test 2 successful!" << endl << endl;
	}
	else
	{
		cout << "Test 2 failed!" << endl << endl;
	}
	// End of test 2.





	// Test 3.
	Move* User_Move3 = new Move; // Create UserMove.
	Move* Opponent_Move3 = new Move; // Create OpponentMove.

	User_Move3->move_type = 2;
	Opponent_Move3->computer_move_type = 3;

	user_damage = do_move(Opponent_Move3->computer_move_type, User_Move3->move_type, User);

	cout << "Test 3: Defend vs Defend: damage expected to be between 4 and 9 (inclusive)" << endl;
	cout << "Damage inflicted: " << user_damage << endl;
	if (user_damage >= 4 && user_damage <= 9)
	{
		cout << "Test 3 successful!" << endl << endl;
	}
	else
	{
		cout << "Test 3 failed!" << endl << endl;
	}
	// End of test 3.




	delete User;
	delete Opponent;
	delete User_Move;
	delete Opponent_Move;
	delete User_Move2;
	delete Opponent_Move2;
	delete User_Move3;
	delete Opponent_Move3;

	return 0;
}
