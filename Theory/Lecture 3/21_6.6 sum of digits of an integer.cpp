#include<iostream>

using namespace std;

int main()
{
	int num, keep_value, reminder, sum = 0;
	cout<<"Enter an integer: ";
	cin>>num;
	keep_value = num;
	while(num != 0)
	{
		reminder = num % 10;
		if(reminder == 0)
			sum = sum + num;
		else 
			sum = sum + reminder;
			
		num = num/10;
	}
	cout<<"The sum of digits of "<<keep_value<<" = "<<sum;
	
}
