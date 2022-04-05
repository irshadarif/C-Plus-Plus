// Fig. 2.5: fig02_05.cpp
// Addition program that displays the sum of two integers.
#include <iostream> // allows program to perform input and output
using namespace std;

// function main begins program execution
int main()
{
   // variable declarations
   int number1; // first integer to add
   int number2; // second integer to add
   int sum; // sum of number1 and number2

   cout << "Enter first integer: "; // prompt user for data
   cin >> number1; // read first integer from user into number1

   cout << "Enter second integer: "; // prompt user for data
   cin >> number2; // read second integer from user into number2

   sum = number1 + number2; // add the numbers; store result in sum

   cout << "Sum is " << sum << endl; // display sum; end line
} // end function main
