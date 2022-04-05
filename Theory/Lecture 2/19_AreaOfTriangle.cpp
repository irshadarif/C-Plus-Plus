// Calculate the area of triangle
#include <iostream> // allows program to perform input and output
using namespace std;
// function main begins program execution
int main()
{
   // variable declarations
   float base = -1; // base
   float height = -1; // height
   float area = -1 ; // area of traingle 
   
   cout << "Enter tbase and height of triangle: "; // prompt user for data
   cin >> base >> height; // read base and height from the user

   area = base*height/2; // add the numbers; store result in sum

   cout << "area of triangle : " << area << endl; // display sum; end line
} // end function main
