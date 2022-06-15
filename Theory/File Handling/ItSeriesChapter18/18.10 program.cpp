// write a program that uses a structure variable to inputs records of three students and stores
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct student
	{
	int mo;
	char name[50];
    int marks;
	};
int main()
	{
	student s;
	ofstream out("students.txt",ios::binary);
	for(int i=1; i<=3;i++)
		{
		 cout<<"ENTER your Roll No:";
		 cin>>s.mo;
		 cout<<"Enter your name:";
		 cin>>s.name;
		 cout<<"Enter your marks:";
		 cin>>s.marks;
		 out.write((char*)&s,sizeof(s));
	   } 
	out.close();
	getch();
	}
	

