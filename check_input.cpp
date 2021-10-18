#include<iostream>
#include<string>

using namespace std;

bool check_input(string input, int numOpts){
	
	string opts[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
	
	bool status = false;
	
	for(int i = 0; i < numOpts; i++){
		
		if (input == opts[i]){
			status = true;
			break;
		}
	}
	
	if (status == false){
		cout << "Invalid input, try again." << endl;
	}
	
	
	return status;
}




