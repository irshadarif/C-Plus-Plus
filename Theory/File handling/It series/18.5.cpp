//18.5
//write a program that store five lines of string in a file and then displays them on the screen by reading these lines .

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
	{
	char str[100];
	ofstream out("strings.txt");
	ifstream in("strings.txt");
	for(int i=0 ; i<5 ; i++)
		{
		cout<<"Enyer a string:";
		gets(str);
		out<<str<<'\n';
		}
	out.close();    	
	cout<<"The list of strings is as follows:"<<endl;
	while(!in.eof())	
		{
		in.getline(str,100);
		cout<<str<<endl;
		}
	in.close();
	getch();
	}
	
