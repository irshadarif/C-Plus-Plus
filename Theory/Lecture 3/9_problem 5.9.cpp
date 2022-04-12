#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"enter a year"<<endl;
	cin>>x;
	if (x%4==0)
		cout<<x<<" is a leap year";
	else
		cout<<x<<" is not a leap year";
	return 0;
}
