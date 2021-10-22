#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Character.h"
#include "Move.h"

using namespace std;

int light_attack(int counter_move_type){
    srand((unsigned)time(0));
    int damage;
    
    if (counter_move_type == 1){
        damage = (rand()%10) + 10;
    }
    
    if (counter_move_type == 2){
        damage = (rand()%5);
    }
    
    if (counter_move_type == 3){
        damage = (rand()%10) + 20;
    }
    return damage;
}

int defend(int counter_move_type){
    srand((unsigned)time(0));
    int damage;
    
    if (counter_move_type == 1){
        damage = (rand()%5);
    }
    
    if (counter_move_type == 2){
        damage = 0;
    }
    
    if (counter_move_type == 3){
        damage = (rand()%5);
    }
    return damage;
}

int heavy_attack(int counter_move_type, Character * User){
    srand((unsigned)time(0));
    int damage;
    
    if (counter_move_type == 1){
        damage = (rand()%20) + 20;
    }
    
    if (counter_move_type == 2){
        damage = (rand()%5) + 5;
    }
    
    if (counter_move_type == 3){
        damage = (rand()%20) + 30;
    }

    User->heavy_recharge_time = User->heavy_recharge_time + 2;

    return damage;
}

int do_move(int move_type, int counter_move_type, Character * User){
    int damage;
    if (move_type == 1){
        damage = light_attack(counter_move_type);
    }
    if (move_type == 2){
        damage = defend(counter_move_type);
    }
    if (move_type == 3){
        damage = heavy_attack(counter_move_type, User);
    }
    return damage;
}

string print_move(int move_type){
    string move_name;
    if (move_type == 1){
        move_name = "light attack";
    }
    else if (move_type == 2){
        move_name = "defend";
    }
    else if (move_type == 3){
        move_name = "heavy attack";
    }
    return move_name;
}