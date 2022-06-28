//Convert the following from rectangular to polar form: C=3 + j4
#include<iostream>
#include<math.h>
using namespace std;
main()
	{
	float real_part=-6, imaginary_part=3, magnitude,angel;	
	cout<<"Enter a complex number:a+bi\n";
	cout<<"Enter real part: ";
	cin>>real_part;
	cout<<"Enter imaginary part: ";
	cin>>imaginary_part;
	magnitude=sqrt(pow(real_part,2)+pow(imaginary_part,2));
	angel=180-atan(abs(imaginary_part)/abs(real_part))*57.2957795;// our aim is beta
	if(imaginary_part>0)
		{
		char sign='+';
		cout<<"\nphaser form= "<<real_part<<sign<<imaginary_part<<"i";
		cout<<"\nrectangular form= "<<magnitude<<"<"<<angel;
		}	
	else
		{
		char sign='-';
		cout<<"\nphaser form= "<<real_part<<sign<<imaginary_part<<"i";
		cout<<"\nrectangular form= "<<magnitude<<"<"<<angel;
		}
	
}
