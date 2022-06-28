#include <iostream> 
using namespace std;

int main()
	{
    float s,vi,a,vf;
    cout << "Enter final velocity "; 
    cin >> vf; 
    cout << "Enter initial velocity "; 
    cin >> vi; 
    cout << "Enter accelaration: "; 
    cin >>a;  
    s = (vf*vf - vi*vi) / 2* a; 
    cout << "s is " << s << endl; 
	} 
