// Example 6.12, 6.13
#include <iostream>
#include <iomanip> 
#include<cmath>
using namespace std;
int main()
	{
	float h = 0.0001;
	float x;
	cout << "Enter a number for x;" << endl;
	cin >> x;
	float div = (pow(x+h,2) - pow(x,2))/h;
	cout << "Derivative of x^2 at :"<< x <<" is : "<< div<<endl;
	}
