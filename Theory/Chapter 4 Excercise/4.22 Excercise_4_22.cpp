// Exercise 4.22: ex04_22.cpp
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
   int row = 10; // initialize row
   int column; // declare column

   while ( row >= 1 ) // loop until row < 1
   {   
      column = 1; // set column to 1 as iteration begins

      while ( column <= 10 ) // loop 10 times
      {             
         cout << ( row % 2 ? "<" : ">" ); // output
         ++column; // increment column
      } // end inner while

      --row; // decrement row
      cout << endl; // begin new output line
   } // end outer while
} // end main
