/* 
Write a program that declare a structure to store employee id and salary of an employee. 
It define and initialize a structure variable and display it.
*/
#include<iostream>
using namespace std;

struct employ
	{
	int empid;
	int salary;
	};

int main()
	{	
	employ usman = {20, 100000};
	cout<<"Employee ID: "<<usman.empid<<endl;
	cout<<"Salary: "<<usman.salary<<endl;
	}
