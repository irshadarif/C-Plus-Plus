#include <iostream> 
#include<cmath>
using namespace std;

int main()
	{
    float w1, w2, T1, T2, T3, T4, teta;
    cout << "Enter weight 1: "; 
    cin >> w1; 
    cout << "Enter weight 2: "; 
    cin >> w2;  
    T1 = w1 / cos(35*3.14/180);
	T2 = T1* sin(35*3.14/180);
	teta = 180/3.14*atan (T2 / w2);
	T3 = w2 / cos(29*3.14/180);
	
	cout<<"T1 :"<< T1 << "\nT2 :"<< T2<< "\nT3: "<< T3<<"\nteta: "<< teta;
	} 
