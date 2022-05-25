#include<iostream>

using namespace std;

int main()
	{
	int x = 1, total;
	while( x <= 100 )///////////// Infinit loop///////// not change x in the body/////////////
		total += x;
		++x;
		cout<<"total: "<<total;	
	}

