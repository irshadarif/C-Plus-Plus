#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
	{
	char ch;
	fstream in("chars.txt");
	while(!in.eof())
		{
		in.get(ch);
		cout<<ch<<endl;
		}
	in.close();
	getch();
	}

