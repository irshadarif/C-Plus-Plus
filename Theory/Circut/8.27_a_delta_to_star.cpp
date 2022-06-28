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
	cout<<"enter the value of Ra ="<<endl;
	cin>>Ra;
	cout<<"enter the value of Rb ="<<endl;
	cin>>Rb;
	cout<<"enter the value of Rc ="<<endl;
	cin>>Rc;
	R1=(Rb*Rc)/(Ra+Rb+Rc);
	R2=(Ra*Rc)/(Ra+Rb+Rc);
	R3=(Ra*Rb)/(Ra+Rb+Rc); 
    cout<<"\nDelta to star converted resistors are:\n";
	cout<<"R1 is =\t"<<R1<<"ohms"<<endl;
	cout<<"R2 is =\t"<<R2<<"ohms"<<endl;
    cout<<"R3 is =\t"<<R3<<"ohms"<<endl;
	}
