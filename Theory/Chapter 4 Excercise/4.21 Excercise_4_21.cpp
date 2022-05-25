// Exercise 4.21: ex04_21.cpp
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
   int count = 1; // initialize count

   while ( count <= 4 ) // loop 10 times
   {   
      // output line of text
      cout << ( count % 2 ? "****" : "++++++++" ) << endl;
      ++count; // increment count
   } // end while
} // end main
