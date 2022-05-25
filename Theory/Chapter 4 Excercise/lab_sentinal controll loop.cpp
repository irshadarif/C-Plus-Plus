// Fig. 4.16: fig04_16.cpp
// Examination-results problem: Nested control statements. 
#include <iostream>
using namespace std;

int main()
{
   // initializing variables in declarations 
   int passes = 0; // number of passes       
   int failures = 0; // number of failures   
   int studentCounter = 1; // student counter
   int result; // one exam result (1 = pass, 2 = fail)
   int count;

   // process 10 students using counter-controlled loop
   while ( result != -1 ) 
   {
      // prompt user for input and obtain value from user
      cout << "Enter result (1 = pass, 2 = fail)  or Enter -1 to quit: "; 
      cin >> result; // input result

      // if...else nested in while                           
      if ( result == 1 )          // if result is 1,         
         passes += 1;     // increment passes;       
      else if (result == 2)                  // else result is not 1, so
         failures += 1; // increment failures      

      // increment studentCounter so loop eventually terminates
      
      studentCounter += 1; 
      count+=1;
   } // end while
   cout<<"Befoe......................"<<"studentCounter"<<count<<endl; 

   // termination phase; display number of passes and failures
   cout << "Passed " << passes << "\nFailed " << failures << endl;
	float PercentPass= passes*100.00/studentCounter;
	cout<<",,,,,,,,,,,,,,"<<PercentPass<<"studentCounter"<<studentCounter<<endl;
   // determine whether more than eight students passed
   if ( PercentPass >= 80 )
      cout << "Bonus to instructor!" << endl; 
} // end main
