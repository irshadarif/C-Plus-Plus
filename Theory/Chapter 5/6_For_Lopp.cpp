// Fig. 5.2: fig05_02.cpp
// Counter-controlled repetition with the for statement.
#include <iostream>
using namespace std;

int main()
{
   // Vary the control variable from 7 to 77 in steps of 7
	for ( int i = 7; i <= 77; i += 7 )
	cout << i << " ";

   cout << endl; // output a newline
} // end main

