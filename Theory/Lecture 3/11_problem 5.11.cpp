#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
	int a, b;
	cout<<"enter first integer"<<endl;
	cin>>a;
	cout<<"enter second integer"<<endl;
	cin>>b;
	if (a%b==0)
		cout<<"the first number is the multiple of second number"<<endl;
	else
		cout<<"the first number is not the multiple of second number"<<endl;
	return 0;
}
