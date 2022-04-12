/* conditional operator divisible */
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<number;
	cout<<(number%3==0 ? " is divisible by 3" :" is not divisible by 3");
}
