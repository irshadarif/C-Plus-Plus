#include<iostream>
using namespace std;
main()
{
	float v,w,phase,c,i,xC;
	cout<<"amplitude of Current= "; 
	cin>>i;
	cout<<"omega= "; 
	cin>>w;
	cout<<"phase= "; 
	cin>>phase;
	cout<<"Capicitance= "; 
	cin>>c;
	xC=1/(w*c);
	v=i*xC;
	phase=phase-90;//as lead by 90 in inductor
	if (phase > 0)
		{
		cout<<i<< " sin (20t + "<< phase <<") ";
		}
	else if (phase < 0)
		{
		cout<<i<< " sin (20t  "<< phase <<") ";
		}
	else
		cout<<i<< " sin 20t "<<" ";		
}
