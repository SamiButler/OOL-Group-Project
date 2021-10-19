#include "Move.h"
#include "Character.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

Move::Move(){
	
	string move_type = "0";
}

void Move::move_menu(Character User){
    cout << "Select move:" << endl;
    cout << "1: Light Attack" << endl;
    cout << "2: Defend" << endl;
    
    if (User.heavy_recharge_time == 0){
        cout << "3: Heavy Attack" << endl;
    }
    
    if (User.special_recharge_time == 0){
        cout << "4: Special Attack" << endl;
    }
}

void Move::select_move(Character User){
    string my_move;
    cin >> my_move;
    start_while:
    while (my_move != "1" && my_move != "2" && my_move != "3" && my_move != "4")
    {
        cout << "Please enter a valid move" << endl;
        cin >> my_move;
    }
    
    if (my_move == "3" && User.heavy_recharge_time != 0){
        cout << "Heavy Attack is still recharging" << endl << endl;
        my_move = "0";
        goto start_while;
    }
    
    if (my_move == "4" && User.special_recharge_time != 0){
        cout << "Special Attack is still recharging" << endl << endl;
        my_move = "0";
        goto start_while;
    }

    int move_int = stoi(my_move);
    
    move_type = move_int;
	
}

void Move::computer_move(Character Opponent)
{
    srand(time(NULL));

    int computer_move;
    computer_move = (rand()%4) + 1;
    cout << endl;
    
    start_while_computer:
    if (computer_move == 3 && Opponent.heavy_recharge_time != 0)
    {
        computer_move = (rand()%4) + 1;
        goto start_while_computer;
    }
    
    if (computer_move == 4 && Opponent.special_recharge_time != 0)
    {
        computer_move = (rand()%4) + 1;
        goto start_while_computer;
    }
    
    computer_move_type = computer_move;
}

void attack(Character character1, Character character2)
{
    // ENTER ALL THE CODE HERE FROM YESTERDAY AND EDIT IT SO IT WORKS
}
