#include "Character.h"
#include "characters.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


int scott_pilgrim::special_attack()
{
	int damage = 10;
	cout << "If I peed my pants would you pretend that I just got wet from the rain?" << endl;
	return damage;
}

int tony_montana::special_attack()
{
	srand((unsigned)time(0));

	int damage = (rand()%40);

	cout << "Say hello to my little friend!" << endl;
	return damage;//information about special attack damage here
}

int skinny_pete::special_attack()
{
	srand((unsigned)time(0));

	int damage = (rand()%20);

	cout << "Straight Up, Straight Up." << endl
	return damage;//information about special attack damage here
}

int dirty_harry::special_attack()
{
	srand((unsigned)time(0));

	int damage = 0;
	int random = (rand()%5);
	if (random == 4){
		damage = 50;
	}

	cout << "'do I feel lucky? ' Well, do ya, punk?" << endl;

	return damage;//information about special attack damage here
}

int chuck_norris::special_attack()
{
	srand((unsigned)time(0));

	int damage = 30 + (rand()%20);

	cout << "I don't initiate violence, I just retaliate." << endl;
	return damage;//information about special attack damage here
}