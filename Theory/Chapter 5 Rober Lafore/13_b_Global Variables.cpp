#include<iostream>
#include<conio.h>
using namespace std;
int g;
void fun();
main ()
	{
	cout<<"enter a number g:"<<endl;
	cin>>g;
	cout<<"value of g before function call: "<<g<<endl;
	fun();
	cout<<endl;
	cout<<"value of g after funtion call: "<<g<<endl;
	getch();
	}
void fun()
	{
	//	int g;
		g =g*2;
	}
