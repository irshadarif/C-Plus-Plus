//WRITE A PROGRAM THAT READS THE CONTENTS OF COUNTRY.txt AND DISPLAY ON THE SCREEN
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class Country
{
	private:
		int id;
		char name[50];
		public:
		void get()
		{
			cout<<"Enter Country id: ";
			cin>>id;
			cout<<"Enter Country name:  ";
			cin>>name;
		 } 
		 void show()
		 {
		 	cout<<"Country ID: "<<id<<endl;
		 	cout<<"Counrty Name: "<<name<<endl;		 	
		 }
		 };
		 void main()
		 {
		 	clrscr();
		 	Country cn;
		 	ifstream in("c:\\country.txt",ios::binary);
		 	in.read((char*)&cn,sizeof(cn));
		 	cn.show();
		 	in.close();
		 	getch();
		 }
