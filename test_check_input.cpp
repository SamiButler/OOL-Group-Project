#include <iostream>
#include <string>

using namespace std;

extern bool check_input(string input, int numOpts);

int main(){
	cout << "string Input: 5" << endl << endl;
	for (int i = 1; i <= 10; i++){
		cout << "numOpts Input: " << i;
		if (i > 5){
			cout << "    Expected Output: 1";
		}
		else if (i <=5){
			cout << "    Expected Output: 0";
		}
		cout << "    Output: " <<  check_input("5", i) << endl;
	}
	return 0;
}
