/* greatest by logical operator && */
#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter three numbers:\n";
	cin>>a>>b>>c;
	if(a>b && a>c)
	     cout<<a<<" is the greatest";
    else if(b>a && b>c)
         cout<<b<<" is the greatest";
    else 
         cout<<c<<" is the greatest";
        
}
