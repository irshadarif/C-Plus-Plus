// Fig. 5.2: fig05_02.cpp
// Counter-controlled repetition with the for statement.
#include <iostream>
using namespace std;

int main()
{
   //Vary the control variable over the following sequence of values: 2, 5, 8, 11, 14, 17.
	for ( int i = 2; i <= 12; i += 3 )
	cout << i << " ";

   cout << endl; // output a newline
} // end main

