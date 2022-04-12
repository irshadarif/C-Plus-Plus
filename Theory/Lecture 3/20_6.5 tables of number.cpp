#include<iostream>

using namespace std;

int main()
{
	int n, c;
	n=1;
	cout<<"Enter a number: ";
	cin>>c;
	while(n<=10)
	{
		cout<<c<<" * "<<n<<" = "<<n*c<<endl;
		n++;
	}

}
