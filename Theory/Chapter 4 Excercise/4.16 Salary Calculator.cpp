#include<iostream>

#include<iomanip>
using namespace std;
int main()
	{
	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;
	
	while ( hours != -1.0 ) 
		{
		cout << "Enter hourly rate of the worker ($00.00): ";
		cin >> rate;
		
		if ( hours <= 40 )
		salary = hours * rate;
		else
		salary = 40.0 * rate + ( hours - 40.0 ) * rate * 1.5;
		
		cout << "Salary is $" << setprecision( 2 ) << salary<< "\n\nEnter hours worked (-1 to end): ";
		cin >> hours;
		}
	
	return 0;
	}

