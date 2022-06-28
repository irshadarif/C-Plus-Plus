#include<iostream>
using namespace std;
main()
{
	float v,w,phase,L,i,xL;
	cout<<"amplitude of Voltage= "; 
	cin>>v;
	cout<<"omega= "; 
	cin>>w;
	cout<<"phase= "; 
	cin>>phase;
	cout<<"inductance= ";
	cin>>L;
	xL=w*L;
	i=v/xL;
	phase = phase -90;
	if (phase > 0)
		{
		cout<<i<< " sin (20t + "<< phase <<") ";
	
		}
	if (phase < 0)
		{
		cout<<i<< " sin (20t  "<< phase <<") ";
		}
	else
		cout<<i<< " sin 20t "<<" ";		
}
