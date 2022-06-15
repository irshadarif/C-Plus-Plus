//WRITE A PROGRAM THAT CREATES A FILE TO STORE NAME AND E-MAIL OF THE USER USING STRUCTURE
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
struct email
	{
	char name[20];
	char id[30];
	};
int main()
	{
	email user;
	email check;
	cout<<"Enter A Name:  ";
	cin>>user.name;
	cout<<"Enter The E-mail Address: ";
	cin>>user.id;
	
	ofstream out("email.txt;",ios::out|ios::binary);
	out.write((char*)&user,sizeof(struct email));
	out.close();
	
	cout<<endl<<"Contents of files are: ";
	ifstream in("email.txt",ios::in|ios::binary);
	in.read((char*)&check,sizeof(struct email));
	
	cout<<endl<<check.name;
	cout<<endl<<check.id;
	in.close();
	getch();	
	}
