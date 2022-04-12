#include<iostream>
using namespace std;
main ()
{
	int a, b, c, maximum;
	cout<<"enter first number"<<endl;
	cin>>a;
	cout<<"enter second number"<<endl;
	cin>>b;
	cout<<"enter third number"<<endl;
	cin>>c;
	maximum=a;
	if (b>maximum)
//	cout<<"the max number is b"<<endl;
		maximum=b;
	if(c>maximum)
	//cout<<"the max number is c"<<endl;
		maximum=c;
	cout<<"the maximum number is"<<maximum<<endl;
	return 0;
}
