//WRITE A PROGRAM THAT STORES AN OBJECT TO A FLIE COUNTRY TEXT USING BINARY I/O.
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
		cout<<"Enter Country Name: ";
		cin>>name;
	}	
	void show()
	{ 
	cout<<"Country ID: "<<id<<endl;
	cout<<"Country Name: "<<name<<endl;
	}
	};
	
		void main()
		{
			clrscr();
			Country cn;
			ofstream out("c:\\country.txt",ios::binary);
			cn.get();
			out.write((char*)&cn,sizeof(cn));
			out.close();
			getch();
		}
	
