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
    
    if (opponent_move_type == 1 || opponent_move_type == 4){
        damage = (rand()%20);
    }
    
    if (opponent_move_type == 2){
        damage = (rand()%20) - (rand()%20);
        if (damage < 0){
            damage = 0;
        }
    }
    
    if (opponent_move_type == 3){
        damage = (rand()%30);
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
