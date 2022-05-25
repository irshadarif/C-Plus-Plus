// Fig. 5.2: fig05_02.cpp
// Counter-controlled repetition with the for statement.
#include <iostream>
using namespace std;

int main()
{
   // Vary the control variable from 100 down to 1 in decrements of 1.
	for ( int i = 100; i >= 1; --i )
	cout << i << " ";

   cout << endl; // output a newline
} // end main

