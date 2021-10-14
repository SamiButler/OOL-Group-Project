#include <time.h>
#include <stdlib.h>

int* generate_random_array()
				// This program makes an array of unique random
				// numbers between 1 and 4.
{
	srand(time(NULL));
	int* random_order_array = new int[4];
	int temp_value;
	int random_value;

	for (int i = 0; i < 4; i++)
	{
		random_order_array[i] = i + 1;
	}

	for (int i = 0; i < 4; i++)
	{
		random_value = (rand()%3) + 1;
		
		temp_value = random_order_array[i];
		random_order_array[i] = random_order_array[random_value];
		random_order_array[random_value] = temp_value;
	}

	return random_order_array;
}
