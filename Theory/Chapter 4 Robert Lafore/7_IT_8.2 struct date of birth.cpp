/*
Write a program that declares a structure that store day, month and year of a birth date. 
It inputes three values and display date of birth in DD/MM/YYYY format.
*/
#include<iostream>
using namespace std;

struct DOB
	{
	int day;
	int month;
	float year;
	};

int main()
	{
	DOB usman;
	cout<<"Enter day of birth: ";
	cin>>usman.day;
	cout<<"Enter month of birth: ";
	cin>>usman.month;
	cout<<"Enter year of birth: ";
	cin>>usman.year;
	cout<<"\nYour date of birth is "<<usman.day<<"/"<<usman.month<<"/"<<usman.year;
	}
