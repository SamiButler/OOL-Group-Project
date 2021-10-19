#include <iostream>
#include "move.h"
#include "Light_attack.h"

#include <time.h>
#include <stdlib.h>

Light_attack::Light_attack(){
    
}

int Light_attack::change_opponent_health(){
    srand(time(NULL));
    int damage;
    
    if (opponent_move_type == 1){
        damage = (rand()%10) + 10;
    }
    
    if (opponent_move_type == 2){
        damage = (rand()%5);
    }
    
    if (opponent_move_type == 3){
        damage = (rand()%10) + 20;
    }
    return damage;
}

int Light_attack::change_user_health(){
    srand(time(NULL));
    int damage;
    
    if (change_opponent_health == 2){
        damage = 0;
    }
    return damage;
}
