#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Character.h"
#include "Move.h"

int light_attack(int counter_move_type){
    srand(time(NULL));
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
    srand(time(NULL));
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

int heavy_attack(int counter_move_type){
    srand(time(NULL));
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
    return damage;
}
