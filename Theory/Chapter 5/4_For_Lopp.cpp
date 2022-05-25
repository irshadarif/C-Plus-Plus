// Fig. 5.2: fig05_02.cpp
// Counter-controlled repetition with the for statement.
#include <iostream>
using namespace std;

int main()
{
   // Vary the control variable from 1 to 100 in increments of 1.
	for ( int i = 1; i <= 100; ++i )
	cout << i << " ";

   cout << endl; // output a newline
} // end main

