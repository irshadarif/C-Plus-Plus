// Example 6.12, 6.13
#include <iostream>
#include <iomanip> 
using namespace std;
int input(float Res[] );
float Rt(float Res[], int);
float Is(float Res[], int);
void Ir(float Res[], int);
void display(float );
int main()
	{
    float ase[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int choice;
    float r, i;
    int counter = input(ase);
    for (int i = 0; i < 10; ++i) {
        cout << "R" << i + 1 << ": " << ase[i] << endl;}
    cout << "Enter Your choice:"<<endl 
         << "1 for the total resistance: RT"<<endl
         << "2 Calculate the source current: Is"<<endl
         << "3 Determine the current through each parallel branch:"<<endl;
    cin >> choice;
    switch (choice)
	    {
	    case 1:
	    	r = Rt(ase,counter);
	    	cout<< "total resistance: "<< r <<" ohms"<< endl;
	    	break;
		case 2:
			i = Is(ase, counter);
			cout<< "The Net current in the circuit:"<<i<<"A"<<endl;
			break;
		case 3:
			Ir(ase,counter);
			break;		
		}

   } 
//-----------------------------------------------------------------------------------
int input(float Res[])
	{
	float res;
	int counter = 0;
	while ( res != -1 ) 
		{                 
		cout << "Enter resister or -1 to quit: ";  
		cin >> res;  
		if (res !=-1)    
			Res[counter] = res; 
		counter++;
		}
	return counter-1;
    }
//--------------------------------------------------------------------------------------------
float Rt(float Res[], int c)
	{
	float total = 0;
	for(int i=0; i<c; i++)
		total=total+ 1/Res[i];	
	return 1/total;
	}
//------------------------------------------------------------------------------------------
float Is(float Res[], int c)
	{
	float rt = Rt(Res, c);
	float vt;
	float I;
	cout<< "Enter value fro input voltage:"<<endl;
	cin >> vt;
	I= vt / rt;
	return  I;
	}
//------------------------------------------------------------------------------------------
void Ir(float Res[], int c)
	{
	float vt;
	cout<< "Enter value fro input voltage:"<<endl;
	cin >> vt;
	float ir[10];
	for(int i=0; i<c; i++)
		ir[i]=vt / Res[i];
	for(int i=0; i<c; i++)
		cout<<"Current through: R"<< Res[i]<<" is: "<<ir[i]<<" A"<<endl<<endl;
	}












