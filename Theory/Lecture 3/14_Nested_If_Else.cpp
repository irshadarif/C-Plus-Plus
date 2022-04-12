/* conditional operator divisible */
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int studentGrade;
	cout<<"Enter a number: ";
	cin>>studentGrade;
	if ( studentGrade >= 90 ) // 90 and above gets "A"
		cout << "A";
	else
		if ( studentGrade >= 80 ) // 80-89 gets "B"
			cout << "B";
		else
			if ( studentGrade >= 70 ) // 70-79 gets "C"
				cout << "C";
			else
				if ( studentGrade >= 60 ) // 60-69 gets "D"
					cout << "D";
				else // less than 60 gets "F"
					cout << "F";
}
