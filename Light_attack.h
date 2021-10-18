#ifndef LIGHT_ATTACK.H
#define LIGHT_ATTACK.H

#include "Move.h"

class Light_attack : public Move
{
    public:
    Light_attack();
    change_opponent_health();
    change_user_health();
};
#endif

