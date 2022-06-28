// Examples 6.1, 6.2, 6.3, 6.5, 6.6, 6.7, 6.8, 6.9
#include <iostream>
#include <iomanip> 
using namespace std;
float series();
void cal_current();
void display(float );
int main()
	{
	float total=0; 
    int counter = 0;
    float res; 
    	cout << "Enter resister or -1 to quit: ";        
    cin >> res;
	while ( res != -1 ) 
		{                  
		total = total + 1/res; 
		cout << "Enter resister or -1 to quit: ";        
		cin >> res; 
		}
	cout<< "\nThe Net conductance of the circuit is = "<< total<<" S"<<endl;
	cout<< "\nThe Net Resistance of the circuit is = "<< 1/total<<" ohms"<<endl;
   } 

