#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float r,L,f;
	cout<<"inductance= "; 
	cin>>L;
	cout<<"Resistance "; 
	cin>>r;	
	L=L*pow(10,-3);
	r=r*pow(10,3);
	f=r/(6.283*L);
	
	cout<<"At frequence "<<f<<" Hz the reactance of a "<<L<<" H inductor match the resistance level of a "<<r<<" ohm resistor";	
}  
