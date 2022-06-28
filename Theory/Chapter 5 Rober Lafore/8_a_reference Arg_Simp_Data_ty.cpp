// ref.cpp
// demonstrates passing by reference
//The main() part of this program asks the user to enter a number of type float. The program  will separate this number into an integer and a fractional part.
#include <iostream>
using namespace std;
int main()
	{
	void intfrac(float, float&, float&); //declaration
	float number, intpart, fracpart; //float variables
	cout << "\nEnter a real number: "; //number from user
	cin >> number;
	intfrac(number, intpart, fracpart); //find int and frac
	cout << "Integer part is " << intpart //print them
	<< ", \nfraction part is " << fracpart << endl;
	return 0;
	}
//--------------------------------------------------------------
// intfrac()
// finds integer and fractional parts of real number
void intfrac(float n, float& intp, float& fracp)
	{
	long temp = static_cast<long>(n); //convert to long,
	cout<<"temp:"<<temp<<endl;
	intp = static_cast<float>(temp); //back to float
	cout<<"intp:"<<intp<<endl;
	fracp = n - intp; //subtract integer part
	}
