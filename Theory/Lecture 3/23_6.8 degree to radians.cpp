#include<iostream>
#include<iomanip>
using namespace std;

const double Pi = 3.141593;

int main()
{
	int degrees = 0;
	double radians;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<"Degrees to Radians \n";
	while(degrees <= 360)
	{
		radians = degrees*Pi/180;
		cout << setw(6)<<degrees <<setw(10)<<radians<<endl;
		degrees += 10;
	}
}
