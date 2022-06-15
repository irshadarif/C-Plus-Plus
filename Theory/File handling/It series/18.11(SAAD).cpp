//WRITE A PROGRAM THAT READS THE RECORDS STORED IN STUDENTS.txt FILE AND DISPLAYS THEM
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
struct student
	{
	int rno;
	char name[50];
	int marks;
	};
int main()
	{
	student s;
	ifstream in ("students.txt",ios::binary);
	while(!in.eof())
		{
		in.read((char*)&s,sizeof(s));
		cout<<"Roll No:"<<s.rno<<endl;
		cout<<"Name:"<<s.name<<endl;
		cout<<"Marks:"<<s.marks<<endl;
		}
	in.close();
	getch();
	}
