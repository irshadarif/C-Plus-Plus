#include<iostream>
using namespace std;
main()
{
	float v,w,phase,r,i;
	cout<<"amplitude of Current= "; 
	cin>>i;
	cout<<"phase= "; 
	cin>>phase;
	cout<<"Resitance= "; 
	cin>>r;
	v=i*r;
	if (phase != 0)
		{
		cout<<"Cuurent= "<<v<< " sin (377t + "<< phase <<") A ";
		}
	else
		cout<<"Cuurent= "<<v<< " sin 377t "<<"A ";	
}
