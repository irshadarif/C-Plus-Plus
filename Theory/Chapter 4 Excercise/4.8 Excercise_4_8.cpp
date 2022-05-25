// Exercise 4.8 Solution: ex04_08.cpp
// Raise x to the y power. 
#include <iostream>
using namespace std;

int main()
{
   int x; // base 
   int y; // exponent
   int i; // counts from 1 to y
   int power; // used to calculate x raised to power y

   i = 1; // initialize i to begin counting from 1
   power = 1; // initialize power

   cout << "Enter base as an integer: ";  // prompt for base
   cin >> x; // input base

   cout << "Enter exponent as an integer: "; // prompt for exponent
   cin >> y; // input exponent

   // count from 1 to y and multiply power by x each time
   while ( i <= y ) 
   {
      power *= x;
      ++i;
   } // end while

   cout << power << endl; // display result
} // end main
