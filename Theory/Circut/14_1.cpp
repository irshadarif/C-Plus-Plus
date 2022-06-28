#include<iostream>
using namespace std;
main()
	{
	float v,phase,r,i;
	cout<<"amplitude of voltage= "; cin>>v;
	cout<<"phase= "; 
	cin>>phase;
	cout<<"Resitance= "; 
	cin>>r;
	i=v/r;
	if (phase != 0)
		{
		cout<<"Cuurent= "<<i<< " sin (377t + "<< phase <<") A ";
		}
	else
		cout<<"Cuurent= "<<i<< " sin 377t "<<"A ";	
	}
