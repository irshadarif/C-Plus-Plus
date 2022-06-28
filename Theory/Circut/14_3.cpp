#include<iostream>
using namespace std;
main()
{
	float v,w,phase,L,i,xL;
	cout<<"amplitude of Current= "; 
	cin>>i;
	cout<<"phase= "; 
	cin>>phase;
	cout<<"omega= "; 
	cin>>w;
	cout<<"inductance= "; 
	cin>>L;
	xL=w*L;
	v=i*xL;
	phase=phase+90;//as v lead i by 90 in inductor	
	if (phase != 0)
		{
		cout<<"Cuurent= "<<v<< " sin (377t + "<< phase <<") ";
		}
	else
		cout<<"Cuurent= "<<v<< " sin 377t "<<" ";	
}
