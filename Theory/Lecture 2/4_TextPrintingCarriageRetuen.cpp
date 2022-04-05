// Fig. 2.1: fig02_01.cpp
// Text-printing program.
// \r Carriage return. Position the screen cursor to the beginning of the current line; do not advance to the next line.
#include <iostream> // allows program to output data to the screen
using namespace std;

// function main begins program execution
int main()
	{
	int a;
	cout << "Welcome to C++!\r"; // display message
	cin>>a;
	cout<<"a :"<<a;
	return 0; // indicate that program ended successfully
	} // end function main


