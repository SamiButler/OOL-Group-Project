#include <time.h>
#include <stdlib.h> //libraries required to allow the random number generator to operate properly

int* generate_random_array()
				// This program makes an array of unique random
				// numbers between 1 and 4.
{
	srand(time(NULL)); 
	int* random_order_array = new int[4]; // create the base array that will be modified into a random order later on
	int temp_value;
	int random_value;

	for (int i = 0; i < 4; i++)
	{
		random_order_array[i] = i + 1; //set each element of the array to be an ordered integer one higher than its index position
	}

	for (int i = 0; i < 4; i++)
	{
		random_value = (rand()%3) + 1; // generates random integer between 1 and 3 for assignment into the array
		
		
		temp_value = random_order_array[i]; //saves the initial ordered value of the array element
		
		random_order_array[i] = random_order_array[random_value]; // reassigns the value of the selected element to the value of another random array element
		
		random_order_array[random_value] = temp_value; //saves the original array value to the randomly selected element.
														// this process repeats for every element in the array, resultin in a 4 value array in no particular order
	}

	return random_order_array;
}
