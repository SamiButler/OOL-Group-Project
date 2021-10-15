#include "Move.h"
#include<iostream>
#include<string>

using namespace std;

Move::Move(){
	
	
	heavy_recharge_time = 0;
	special_recharge_time = 0;

}

void Move::move_menu(){
    cout << "Select move:" << endl;
    cout << "1: Light Attack" << endl;
    cout << "2: Defend" << endl;
    
    if (heavy_rechrage_time == 0){
        cout << "3: Heavy Attack" << endl;
    }
    
    if (special_rechrage_time == 0){
        cout << "4: Special Attack" << endl;
    }
}

void Move::select_move(){
    int my_move;
    cin >> my_move >> endl;
    while (my_move != 1 || my_move != 2 || my_move != 3 || my_move != 4 ||){
        cout << "Please enter a valid move" << endl;
        cin >> my_move >> endl;
    }
    
    if (my_move == 3 && heavy_attack_time != 0){
        cout << "Heavy Attack is still recharging" << endl;
        my_move = 0;
        goto 25;
    }
    
    if (my_move == 4 && special_attack_time != 0){
        cout << "Special Attack is still recharging" << endl;
        my_move = 0;
        goto 25;
    }
    
    move_type = my_move;
	
}

Move::~Move(){

}