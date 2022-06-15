//18.4
//write a program that displays all records from city.txt prepared in prrevious example.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
	{	
	char city[50];
	ifstream file("city.txt");
	if(!file)
		{
		cout<<"Error in opening file.";
		exit(1);
		}
	cout<<"The list of cities is as follows:<<endl";
	while(!file.eof())	
		{
		file>>city;
		cout<<city<<endl;
		}
	file.close();
	getch();
	}
	
