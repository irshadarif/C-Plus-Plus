// Calculate series net resistance
#include <iostream> // allows program to perform input and output
using namespace std;
// function main begins program execution
int main()
{
   // variable declarations
   float R1 = -1; 
   float R2 = -1; 
   float R3 = -1;
   float Ra = -1; 
   float Rb = -1; 
   float Rc = -1;
   
   cout << "Enter Delta resistance : "; // prompt user for data
   cin >> Ra >> Rb>> Rc; // read Resistances from the user

   R1 = (Rb*Rc)/(Ra+Rb+Rc); 
   R2 = (Ra*Rc)/(Ra+Rb+Rc);
   R3 = (Ra*Rb)/(Ra+Rb+Rc);

   cout << "Star equelent " <<" R1: "<<R1<<" , R2 :"<<R2<<" and R3 :"<<R3<< endl; 
} // end function main
