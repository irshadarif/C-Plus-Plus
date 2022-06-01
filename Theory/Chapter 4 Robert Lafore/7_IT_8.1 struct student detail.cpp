/* 
Witer a program that declare a structure to store Rool NUNMBER, marks, average and grade of a student. The program should define a structure variable, 
input the values and then display the values.
*/
#include<iostream>
using namespace std;

struct student
	{
	int rno;
	int marks;
	float avg;
	char grade;
	};

int main()
	{
	student usman;
	cout<<"Enter roll no: ";
	cin>>usman.rno;
	cout<<"Enter marks: ";
	cin>>usman.marks;
	cout<<"Enter average: ";
	cin>>usman.avg;
	cout<<"Enter grade: ";
	cin>>usman.grade;
	
	cout<<"You entered the following details: \n";
	cout<<"Roll No: "<<usman.rno<<endl;
	cout<<"Marks: "<<usman.marks<<endl;
	cout<<"Average: "<<usman.avg<<endl;
	cout<<"Grade: "<<usman.grade<<endl;
	}
