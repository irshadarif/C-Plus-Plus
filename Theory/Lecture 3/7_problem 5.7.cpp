#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int b, c, d, e,maximum, minimum,a;
	cout<<"enter five integer"<<endl;
	cin>>a>>b>>c>>d>>e;
	minimum=maximum=a;
	if(b<minimum)
		minimum=b;
	if(c<minimum) 
		minimum=c;
	if(d<minimum)
		minimum=d;
	if(e<minimum) 
		minimum=e;
		
		
	if(b>maximum) 
		maximum=b;
	if(c>maximum) 
		maximum=c;
	if(d>maximum) 
		maximum=d;
	if(e>maximum) 
		maximum=e;
	cout<<"the largest number is "<<maximum<<endl;
	cout<<"the smallest number is "<<minimum<<endl;
	getch();
}
