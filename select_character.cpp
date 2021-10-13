#include <iostream>
#include <string>

using namespace std;

string select_character()
{
	int user_input = 0;
	string character_name;

	cout << "Choose from the corresponding numbers: ";

	while (user_input < 1 || user_input > 5)
	{
		cin >> user_input;
		if (user_input < 1 || user_input > 5)
		{
			cout << "Please make sure to enter a number between 1 and 5." << endl;
		}
	}

	if (user_input == 1)
	{
		character_name = "Scott Pilgrim";
	}
	else if (user_input == 2)
	{
		character_name = "Tony Montana";
	}
	else if (user_input == 3)
	{
		character_name = "Skinny Pete";
	}
	else if (user_input == 4)
	{
		character_name = "Dirty Harry";
	}
	else if (user_input == 5)
	{
		character_name = "Chuck Norris";
	}

	cout << endl << "You have selected " << character_name << "." << endl << endl;

	return character_name;
}
