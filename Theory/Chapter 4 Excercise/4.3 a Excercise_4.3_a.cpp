#include<iostream>

using namespace std;

int main()
	{
	//....................aaaaaaaaaa....................................
	cout<<"Part a"<<endl;
	int x = 1, y = 2, z;
	z = x++ + y;
	cout << z<<endl<<endl;
	
	//..................bbbbbbbbbbbbb.....................................
	cout<<"Part b"<<endl;
	int count = 12;
	if (count > 10 )
		cout << "Count is greater than 10" << endl<<endl;
	
	//.................cccccccccccccccccc....................................
	cout<<"Part c"<<endl;
	int total = 9;
	int sd = 4;	
	total -= --sd;
	cout << total <<endl<<endl;
	
	//.................dddddddddddddddd............................................
	cout<<"Part d"<<endl;
	int divisor = 2, q = 10;
	q %= divisor;
    q = q % divisor;
    cout << q<<endl;
		
	}

