// dayenum.cpp
// demonstrates enum types
#include <iostream>
using namespace std;
//specify enum type
enum direction { north, south, east, west };
int main()
	{
	direction dir1 = south;
	cout << dir1;
	return 0;
	}
