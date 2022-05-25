// Exercise 4.12: ex04_12.cpp
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
   int y, limit; // declare y
   int x = 1; // initialize x
   int total = 0; // initialize total
   cout<<"Enter a number upto which you want to squre and sum: "<<endl;
   cin >> limit;

   while ( x <= limit ) // loop 10 times
   {    
      y = x * x; // perform calculation
      cout << y << endl; // output result
      total += y; // add y to total
      x++; // increment counter x
   } // end while

   cout << "Total is " << total << endl; // display result
} // end main
