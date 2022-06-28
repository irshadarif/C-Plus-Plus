#include <iostream> 
using namespace std;

int main()
	{
    float s,vi,a,t;
    cout << "Enter initial velocity "; 
    cin >> vi; 
    cout << "Enter accelaration: "; 
    cin >>a; 
	cout << "Enter time: "; 
    cin >>t; 
    s = vi*t + a*t*t/2; 
    cout << "s is " << s << endl; 
	} 
