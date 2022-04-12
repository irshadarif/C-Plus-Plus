/* conditional operator */
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	float marks;
	cout<<"Enter Your Marks: ";
	cin>>marks;
	cout<<"You are ";
	cout<<(marks>40 ? "PASSED" : "FAILED"); // ka chari condition satisfy sho nu passed ba display kigi otherwise failed ba display kigi
}
