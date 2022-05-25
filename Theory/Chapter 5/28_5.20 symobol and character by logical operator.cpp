/* symobol and character by && || operator */
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character: ";
	cin>>ch;
	if((ch>='A'||ch>='a') && (ch<='Z'||ch<='z'))
	    cout<<ch<<" is a character";
	else if(ch>=0&&ch<=9)
	cout<<ch<<" is a symbol";
	else
	cout<<ch<<" is a symbol";
}
