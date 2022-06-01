// table.cpp
// demonstrates simple function
#include <iostream>
using namespace std;
void repchar(char, int); //function declaration
// (prototype)
int main()
	{
	char chin;
	int nin;
	cout << "Enter a character: ";
	cin >> chin;
	cout << "Enter number of times to repeat it: ";
	cin >> nin;
	cout<<endl;
	repchar(chin, nin);
	return 0;
	}
// repchar()
// function definition
void repchar(char ch, int n) //function declarator
	{
	for(int j=0; j<n; j++) //function body
	cout << ch;
	cout << endl;
	}
