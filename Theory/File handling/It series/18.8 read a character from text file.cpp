#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<ctype.h>
using namespace std;
int main()
	{
	char ch;
	int t,v;
	t=v=0;
	ifstream in("chars.txt");
	while(!in.eof())
		{
		in.get(ch);
		ch=tolower(ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			v++;
		t++;
		cout<<ch<<endl;
		}
	cout<<"Total characters:"<<t<<endl;
	cout<<"Total vowels:"<<v<<endl;
	in.close();
	getch();
}

