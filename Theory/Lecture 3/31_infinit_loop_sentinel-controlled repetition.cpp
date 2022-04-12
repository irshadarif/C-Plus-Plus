
#include <iostream>
#include <iomanip> // parameterized stream manipulators  
using namespace std;
int main()
   {
   int total; // sum of grades entered by user
   unsigned int gradeCounter; // number of grades entered
   int grade; // grade value
   double average; // number with decimal point for average: 

   // initialization phase
   total = 0; // initialize total
   gradeCounter = 0; // initialize loop counter

   // processing phase
   // prompt for input and read grade from user  
   cout << "Enter grade or -1 to quit: ";        
   cin >> grade; // input grade or sentinel value

   // loop until sentinel value read from user   
   while ( grade != -1 ) // while grade is not -1
   	    total = total + grade; // add grade to total
    gradeCounter = gradeCounter + 1; // increment counter
      
      // prompt for input and read next grade from user
    cout << "Enter grade or -1 to quit: ";           
    cin >> grade; // input grade or sentinel value   

   // termination phase
   if ( gradeCounter != 0 ) // if user entered at least one grade...
      {
      // calculate average of all grades entered              
      average = static_cast< double >( total ) / gradeCounter;
      
      // display total and average (with two digits of precision)
      cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
      cout << "Class average is " << setprecision( 2 ) << fixed << average << endl;
      } // end if
   else // no grades were entered, so output appropriate message
      cout << "No grades were entered" << endl;
   } // end function determineClassAverage
