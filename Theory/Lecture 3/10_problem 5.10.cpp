#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	float salary, bonus;
	int grade;
	cout<<"enter your salary"<<endl;
	cin>>salary;
	cout<<"enter your grade"<<endl;
	cin>>grade;
	
	if (grade>15)
		bonus= salary*0.50;
	else
		bonus=salary*0.25;
	salary=salary+bonus;
	cout<<"your total salary is RS: "<<salary<<endl;
	getch();
}
