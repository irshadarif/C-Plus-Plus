#include<iostream>
#include<math.h>
using namespace std;
main()
{
/*if user want to enter data remove // from section A */
	float real_part,imaginary_part,amplitude=10,phase=230;
	
			/*Section A*/	
//	cout<<"Enter a complex number:a+bi\n";
//	cout<<"Enter real part: ";
//	cin>>real_part;
//	cout<<"Enter imaginary part: ";
//	cin>>imaginary_part;
			/*Section A END*/	

	real_part=amplitude*cos((phase-180)/57.2957795); //beta
	imaginary_part=amplitude*sin((phase-180)/57.2957795);
	
	
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
	cout<<"\nanswer is in radian";
}
