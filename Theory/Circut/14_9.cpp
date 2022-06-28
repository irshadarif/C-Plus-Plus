#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float c,L,f;
	cout<<"inductance= "; 
	cin>>L;
	cout<<"Capicitance= "; 
	cin>>c;
	
	L=L*pow(10,-3);
	c=c*pow(10,-6);
	f=1/(6.283*sqrt(L*c));
	
	cout<<"At frequence "<<f<<" Hz both will have the same reactance";
	
}  
