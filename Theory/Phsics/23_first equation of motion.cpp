#include <iostream> 
using namespace std;

int main()
	{
    float vf,vi,a,t;
    cout << "Enter initial velocity "; 
    cin >> vi; 
    cout << "Enter accelaration: "; 
    cin >>a; 
	cout << "Enter time: "; 
    cin >>t; 
    vf = vi+a*t; 
    cout << "vf is " << vf << endl; 
	} 
