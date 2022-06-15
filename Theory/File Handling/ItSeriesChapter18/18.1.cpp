//18.1
//write a program that writes three character in afile using formatted I/O.

           
#include <fstream> //for file I/O
#include <iostream>
#include <string>
using namespace std;

int main()
	{
	int n=13;
	char ch='*';
	double d=38.125;
	ofstream file;
	file.open("test.txt");
	if(!file)
		{
		cout<<"File opening error";
		exit(1);		
		}
    file<<n<<' '<<ch<<' '<<d;
	file.close();

	}
	
