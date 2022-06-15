//18.2
//write a program that inputs the name of five cities and stores them in a file city.txt.

#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{

	char city[50];
	ofstream file("city.txt");
	for(int i=0; i<5; i++)
		{
		cout<<"Enyer name of any city:";
		cin>>city;
		file<<city<<"\n";
		}
	file.close();
	getch();
}
	
