#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));
	
	int ID_counter = 0;
	int* ID_array = new int[4];
	
	for (int i = 0; i < 4; i++)
	{
		ID_array[i] = 0;
	}

	for (int i = 1; i < 4; i++)
	{
		while (ID_array[i] == ID_array[i-1])
		{
			ID_array[i] = (rand() % 3) + 1;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << ID_array[i] << " ";
	}

	cout << endl;

	delete[] ID_array;
	
	return 0;
}
