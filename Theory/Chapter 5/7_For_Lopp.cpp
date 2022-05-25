// Fig. 5.2: fig05_02.cpp
// Counter-controlled repetition with the for statement.
#include <iostream>
using namespace std;

int main()
{
   // Vary the control variable from 20 down to 2 in steps of -2
	for ( int i = 20; i >= 2; i -= 2 )
	cout << i << " ";

   cout << endl; // output a newline
} // end main

