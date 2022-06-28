// Example 6.12, 6.13
#include <iostream>
#include <iomanip> 
#include<cmath>
using namespace std;
int main()
	{
	float delta ;
	int n;
	float integration = 0;
	cout<< "Enter Number of rectangles : "<< endl;
	cin >> n;
	delta = 1.0 /n;
	for ( int i = 0; i < n; i++)
		{
		integration += (1-pow((i*delta),2))* delta ;
		}
	cout<< " the integration of 1 - x is:" <<integration<< endl;
	
	}
