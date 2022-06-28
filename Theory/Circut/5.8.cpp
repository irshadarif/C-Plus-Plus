#include <iostream>
#include <iomanip> 
using namespace std;

int main()
	{
	float E1, E2, V1, V2;
	cout<<"Enter value for "<<endl;
	cin >>E1 >> E2 >> V1;
	V2= E1 - E2 - V1;
	cout << "Voltage across V2: "<< V2;
	} 
