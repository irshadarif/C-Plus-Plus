// Example 6.12, 6.13
#include <iostream>
#include <iomanip> 
using namespace std;
void input(float Res[]);
void d_to_s(float [], float []);
void s_to_d(float [], float []);
void display(float Res[]);
int main()
	{
	float DS[10]={0, 0, 0};
	float D[10]={0, 0, 0};
	float S[10]={0, 0, 0};
    int choice;
    float r, i;
    input(DS);
    display(DS);
    cout << "Enter Your choice:"<<endl 
         << "1 for delta to star conversion"<<endl
         << "2 for star to delta conversion"<<endl;
    cin >> choice;
    switch (choice)
	    {
	    case 1:
	    	d_to_s(DS, S);
	    	display(S);
	    	break;
		case 2:
	    	s_to_d(DS, D);
	    	display(D);
	    	break;
		}	

	}
//-------------------------------------------------------------------------------
void d_to_s(float R[], float d[])
	{
	d[0]=(R[1]*R[2])/(R[0]+R[1]+R[2]);
	d[1]=(R[0]*R[2])/(R[0]+R[1]+R[2]);
	d[2]=(R[0]*R[1])/(R[0]+R[1]+R[2]);
	}
//-------------------------------------------------------------------------------
void s_to_d(float R[], float s[])
	{
	s[0]=((R[0]*R[1])+(R[0]*R[2])+(R[1]*R[2]))/R[0];
	s[1]=((R[0]*R[1])+(R[0]*R[2])+(R[1]*R[2]))/R[1];
	s[2]=((R[0]*R[1])+(R[0]*R[2])+(R[1]*R[2]))/R[2];
	}
//-------------------------------------------------------------------------------
void input(float Res[])
	{
	cout<<"Enter three resistances:"<<endl;
	cout<<"For delta enter in order of a, b and c"<<endl;
	cout<<"For star enter in order of 1, 2 and 3"<<endl;
	cout<<"enter the value of first resister ="<<endl;
	cin>>Res[0];
	cout<<"enter the value of second resister ="<<endl;
	cin>>Res[1];
	cout<<"enter the value of third resister ="<<endl;
	cin>>Res[2];
	}

//---------------------------------------------------------------------------------
void display(float Res[])
	{
	cout<< "The values are:"<<endl;
	for(int i=0; i<3; i++)
		cout<<Res[i]<<endl;
	}

