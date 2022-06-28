#include<iostream>
#include<math.h>
using namespace std;
main()
	{
	float real_part,imaginary_part,amplitude=10,phase=45;			
	cout<<"Enter a complex number:a+bi\n";
	cout<<"Enter real part: ";
	cin>>real_part;
	cout<<"Enter imaginary part: ";
	cin>>imaginary_part;	
	real_part=cos(phase/57.2957795);
	real_part=amplitude*real_part;
	imaginary_part=cos(phase/57.2957795);
	imaginary_part=amplitude*imaginary_part;
	if(imaginary_part>0)
		{
		char sign='+';
		cout<<"\nPhasor form= "<<amplitude<<"<"<<phase;
		cout<<"\nrectangular= "<<real_part<<sign<<imaginary_part<<"i";
		}	
	else
		{
		cout<<"\nPhasor form= "<<amplitude<<"<"<<phase;
		cout<<"\nrectangular= "<<real_part<<imaginary_part<<"i";
		}
	}
