// write a program that inputs five integers and stores it in a file using binary 1/O
#include <iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
	{
	int n;
	ofstream out("data.txt" , ios::binary);
	for(int i=1; i<=5;i++)
    	{
		cout<<"Enter an integer:";
		cin>>n;
		out.write((char*)n , sizeof(n));
    	}
    out.close();
    getch();
	}
