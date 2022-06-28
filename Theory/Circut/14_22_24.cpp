#include<bits/stdc++.h>
using namespace std;

//C++ Program for multiplication of two complex nos

typedef struct Complex{
  float real;
  float imag;
  void display();

}Complex;

void Complex::display()
{
   cout<<real<<"+"<<imag<<"i"<<endl;
}

Complex Multiply(Complex , Complex);

int main(){
  Complex z1 , z2 , ans;
  
  cout<<"Enter the real and imaginary parts of the first complex number:";
  cin>>z1.real>>z1.imag;
  cout<<"z1 = ";
  z1.display();

  
  cout<<"Enter the real and imaginary parts of the second complex number:";
  cin>>z2.real>>z2.imag;
  cout<<"z2 = ";
  z2.display();

  

//  ans.real=(z1.real*z2.real)-(z1.imag*z2.imag);
//  ans.imag=(z1.real*z2.imag)+(z1.imag*z2.real);
  
   ans.real=(((z1.real)*(z2.real))+((z1.imag)*(z2.imag)))/(pow(z2.real,2)+pow(z2.imag,2));
 ans.imag=(((z1.real)*(z1.imag))-((z1.real)*(z2.imag)))/(pow(z2.real,2)+pow(z2.imag,2));

  
  cout<<"The result after the multiplication of z1 and z2 is: "<<endl;
  cout<<"z1.z2 = ";
  ans.display();
  return 0;
}
