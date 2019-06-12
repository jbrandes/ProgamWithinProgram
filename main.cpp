#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>


using namespace std;



int main () {

int input;

cout << "Which program would you like to run?" << endl;
cout << "Press 1 for Bank Teller" << endl;
cout << "Press 2 for Choose Your Own Adventure" << endl;
cin >> input;


	if (input == 1) {

	std::system("./Bank");


	}
	
	else if (input == 2) {
	
	
	std::system("./Choose");

	
	}


return 0;

}
