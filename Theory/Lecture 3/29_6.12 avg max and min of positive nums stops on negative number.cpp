#include<iostream>

using namespace std;

int main()
{
	float num, sum;
	float avg, min, max;
	int count;
	sum = 0.0;
	count = 0;
	cout<<"Enter positive number: ";
	cin>>num;
	min = num;
	max = num;
	while(num >= 0.0)
	{
		sum += num;
		count++;
		if(num>max)
		max = num;
		cout<<"Enter positive number: ";
		cin>>num;
	}
	if(count == 0)
	cout<<"No positive number entered. "<<endl;
	else
	{
		avg = sum/count;
		cout<<"You entered  "<<count<<" numbers."<<endl;
		cout<<"Average = "<<avg<<endl;
		cout<<"Minimum = "<<min<<endl;
		cout<<"Maximum = "<<max<<endl;
	}
}
