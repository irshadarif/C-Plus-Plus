// Calculate series net resistance
#include <iostream> // allows program to perform input and output
using namespace std;
// function main begins program execution
int main()
{
   // variable declarations
   float Resistance1 = -1; // base
   float Resistance2 = -1; // height
   float NetResistance = -1 ; // area of traingle 
   
   cout << "Enter Resistance 1 and Resistance 2: "; // prompt user for data
   cin >> Resistance1 >> Resistance2; // read Resistances from the user

   NetResistance = Resistance1+Resistance2; // add the numbers; store result in NetResistance

   cout << "NetResistance of " <<" R1: "<<Resistance1<<" and R2 :"<<Resistance2<< " is: " << NetResistance << endl; // display sum; end line
} // end function main
