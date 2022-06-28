// Example 6.12, 6.13
#include <iostream>
#include <iomanip> 
#include<cmath>
using namespace std;
struct complex
	{
	float real;
	float img;
	};
void add();
void sub();
void mul();
void div();
void polar();
complex input();
int main()
	{
    float real;    //stores the real part
    float img;     //stores the complex part
    int choice;
    cout << "Enter Your choice:"<<endl 
         << "1 for add"<<endl
         << "2 for subtrict"<<endl
         << "3 for multiplication"<<endl
         << "4 for Division"<<endl
         << "5 for conversion to polar"<<endl;
    cin >> choice;
    switch (choice)
	    {
	    case 1:
	    	add();
	    	break;
		case 2:
	    	sub();
	    	break;
	    case 3:
	    	mul();
	    	break;
		case 4:
	    	div();
	    	break;
		case 5:
	    	polar();
	    	break;
		}	
	}
//-------------------------------------------------------------------------------
complex input()
	{
	complex n;
    cout<<"\tEnter the real and img of complex no.\n";
    cout<<"\tReal : ";
    cin>>n.real;
    cout<<"\tImg : ";
    cin>>n.img;
    return n; 
    }
//---------------------------------------------------------------------------------
void add()
  {
   complex n1 = input();
   complex n2 = input();
   complex add;
   add.real = n1.real + n2.real;
   add.img = n1.img + n2.img;
   cout<<"\n\n\tsubstraction is= "<<add.real<<"+"<<add.img<<"i";
  }
//---------------------------------------------------------------------------------
void sub()
  {
   complex n1 = input();
   complex n2 = input();
   complex sub;
   sub.real = n1.real - n2.real;
   sub.img = n1.img - n2.img;
   cout<<"\n\n\tsubstraction is= "<<sub.real<<"+"<<sub.img<<"i";
  }
//-----------------------------------------------------------------------------------
void mul()
  {
   complex n1 = input();
   complex n2 = input();
   complex mul;
   mul.real = ((n1.real*n2.real)-(n1.img*n2.img));
   mul.img = ((n1.real*n2.img)+(n2.real*n1.img));
   cout<<"\n\n\tmultiplication is= "<<mul.real<<"+"<<mul.img<<"i";
  }
//------------------------------------------------------------------------------------
void div()
  {
  	complex n1 = input();
   complex n2 = input();
   complex div;
   div.real = ((n1.real*n2.real)+(n1.img*n2.img))/(pow(n2.real,2)+pow(n2.img,2));
   div.img = ((n1.img*n2.real)-(n1.real*n2.img))/(pow(n2.real,2)+pow(n2.img,2));
   cout<<"\n\n\tdivision is= "<<div.real<<"+"<<div.img<<"i";
  }
void polar()
  {
	complex n1 = input();
    float modulus = sqrt(pow(n1.real,2)+pow(n1.img,2));
	cout<<"\n\n\tmagnitude = "<<modulus;
	float phase=atan((n1.img)/(n1.real))*57.3;
	cout<<"\n\n\tphase angle= "<<phase;
	cout<<"\n\n\tpolar to rectangular= "<<modulus<<"<"<<phase;
  }
