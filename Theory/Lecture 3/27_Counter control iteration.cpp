
#include <iostream>
#include <iomanip> // parameterized stream manipulators  
using namespace std;
int main()
{
   int total; // sum of grades entered by user
   int gradeCounter; // number of the grade to be entered next
   int grade; // grade value entered by user
   int average; // average of grades

   // initialization phase
   total = 0; // initialize total
   gradeCounter = 1; // initialize loop counter

   // processing phase
   while ( gradeCounter <= 10 ) // loop 10 times
   {
      cout << "Enter grade: "; // prompt for input
      cin >> grade; // input next grade
      total = total + grade; // add grade to total
      gradeCounter = gradeCounter + 1; // increment counter by 1
   } // end while

   // termination phase
   average = total / 10; // integer division yields integer result

   // display total and average of grades
   cout << "\nTotal of all 10 grades is " << total << endl;
   cout << "Class average is " << average << endl; 
} // end function determineClassAverage2

