// Fig. 5.2: fig05_02.cpp
// Counter-controlled repetition with the for statement.
#include <iostream>
using namespace std;

int main()
{
   // Vary the control variable over the following sequence of values: 99, 88, 77, 66, 55.
	for ( int i = 99; i >= 55; i -= 11 )
	cout << i << " ";

   cout << endl; // output a newline
} // end main

