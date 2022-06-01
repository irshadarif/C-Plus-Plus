// dayenum.cpp
// demonstrates enum types
#include <iostream>
using namespace std;
//specify enum type
enum days_of_week { Sun=10, Mon, Tue, Wed, Thu, Fri, Sat };
int main()
	{
	days_of_week day1, day2; //define variables
	//of type days_of_week
	day1 = Mon; //give values to
	day2 = Thu; //variables
		
	cout<<"Try: "<< day1;
	return 0;
	}
