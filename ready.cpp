#include <iostream>
#include <string>

using namespace std;

bool ready()
{
	bool status = false;
	string input;

	cin >> input;

	while (input != "1")
	{
		cout << endl << "Press 1 when you are ready to continue." << endl;
		cin >> input;
	}
	status = true;
	return status;
}
