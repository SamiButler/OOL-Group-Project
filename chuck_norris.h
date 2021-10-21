#ifndef CHUCK_NORRIS__
#define CHUCK_NORRIS__

#include <string>
#include "Character.h"

class chuck_norris : public Character

{
public:
	chuck_norris();
	virtual int special_attack();

};

#endif