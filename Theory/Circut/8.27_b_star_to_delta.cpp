// Example 6.12, 6.13
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
	{
	float Ra;
	float Rb;
	float Rc;
	float R1;
	float R2;
	float R3;
	cout<<"enter the value of R1 ="<<endl;
	cin>>R1;
	cout<<"enter the value of R2 ="<<endl;
	cin>>R2;
	cout<<"enter the value of R3 ="<<endl;
	cin>>R3;
	Ra=((R1*R2)+(R1*R3)+(R2*R3))/R1;
	Rb=((R1*R2)+(R1*R3)+(R2*R3))/R2;
	Rc=((R1*R2)+(R1*R3)+(R2*R3))/R3; 
    cout<<"\nDelta to star converted resistors are:\n";
	cout<<"R1 is =\t"<<Ra<<" ohms"<<endl;
	cout<<"R2 is =\t"<<Rb<<" ohms"<<endl;
    cout<<"R3 is =\t"<<Rc<<" ohms"<<endl;
	}
