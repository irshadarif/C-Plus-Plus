/*
Write a programe that uses a structure to store three parts of phone number i.e. Nationa code, Area code and number separatly. 
Create two variables of structure phone. 
initialize one variable and get input from the user in the second variable and the display both numbers. 
*/
#include<iostream>
using namespace std;
struct phone
	{
	int ncode, 
	int acode;
	long number;	
	};
int main()
	{
	phone p1, p2 = {50, 60 , 10000323};
	cout<<"Enter national code: ";
	cin>>p1.ncode;
	cout<<"Enter area code: ";
	cin>>p1.acode;
	cout<<"Enter phone number: ";
	cin>>p1.number;
	cout<<"Phone Number 1; +";
	cout<<p1.ncode<<"-"<<p1.acode<<"-"<<p1.number<<endl;
	cout<<"Phone Number 2; +";
	cout<<p2.ncode<<"-"<<p2.acode<<"-"<<p2.number<<endl;
	}
