// Fig. 5.1: fig05_01.cpp
// Counter-controlled repetition.
#include <iostream>
using namespace std;

int main()
	{
	int counter = 1; // declare and initialize control variable

	while ( ++counter <= 10 ) // loop-continuation condition
		cout << counter << " ";

	cout << endl; // output a newline
	} // end main

