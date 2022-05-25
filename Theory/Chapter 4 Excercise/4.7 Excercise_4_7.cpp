#include<iostream>

using namespace std;

int main()
	{
	int x, y, i, power;
	cout<<"Enter x and y:"<<endl;
	cin >> x;
	
	cout<<endl;
	
	cin >> y;
	i = 1;
	power = 1;
	power *= x;
	
	//power = power * x;
	++i;
	if ( i <= y )
	cout << power << endl;
		
	}

