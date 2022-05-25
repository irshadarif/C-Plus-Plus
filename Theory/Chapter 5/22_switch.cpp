/* switch */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
	{
	int aCount = 0; // initialize count of A grades to 0
	int bCount = 0; // initialize count of B grades to 0
	int cCount = 0; // initialize count of C grades to 0
	int dCount = 0; // initialize count of D grades to 0
	int fCount = 0; // initialize count of F grades to 0
	
	char grade;
	int gradeCounter = 0;
	int total = 0;
	cout << "Enter the letter grades." << endl
	<< "Enter the EOF character to end input." << endl;
	while (cin >> grade)
		{
		total += grade;
		++gradeCounter;
		// determine which grade was entered
	      switch ( grade ) // switch statement nested in while
	      {
	         case 'A': // grade was uppercase A
	         case 'a': // or lowercase a
	            ++aCount; // increment aCount
	            break; // necessary to exit switch
	
	         case 'B': // grade was uppercase B
	         case 'b': // or lowercase b
	            ++bCount; // increment bCount    
	            break; // exit switch
	
	         case 'C': // grade was uppercase C
	         case 'c': // or lowercase c
	            ++cCount; // increment cCount    
	            break; // exit switch
	
	         case 'D': // grade was uppercase D
	         case 'd': // or lowercase d
	            ++dCount; // increment dCount    
	            break; // exit switch
	
	         case 'F': // grade was uppercase F
	         case 'f': // or lowercase f
	            ++fCount; // increment fCount    
	            break; // exit switch
	
	         case '\n': // ignore newlines,  
	         case '\t': // tabs, 
	         case ' ': // and spaces in input
	            break; // exit switch
	
	         default: // catch all other characters
	            cout << "Incorrect letter grade entered."
	               << " Enter a new grade." << endl;
	            break; // optional; will exit switch anyway
	      } // end switch
		}
	cout << "\n\nNumber of students who received each letter grade:"
	<< "\nA: " << aCount // display number of A grades
	<< "\nB: " << bCount // display number of B grades
	<< "\nC: " << cCount // display number of C grades
	<< "\nD: " << dCount // display number of D grades
	<< "\nF: " << fCount // display number of F grades
	<< endl;
	}
