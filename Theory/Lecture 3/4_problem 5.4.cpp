#include<iostream>
using namespace std;
main()
{
	int subject1, subject2, subject3;
	float average;
	cout<<"enter marks of subject1"<<endl;
	cin>>subject1;
	cout<<"enter marks of subject2"<<endl;
	cin>>subject2;
	cout<<"enter marks of subject3"<<endl;
	cin>>subject3;
	average=(subject1+subject2+subject3)/3.0;
	cout<<average<<endl;
	if(average>=80)
		{
		cout<<"your marks is above the standerd"<<endl;
		cout<<"your admission is granted"<<endl;	
		}
//	else 
//	cout<<"your marks is not standerd"<<endl;
//	cout<<"your admission is not garented"<<endl;
}
