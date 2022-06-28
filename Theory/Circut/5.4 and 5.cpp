#include <iostream>
#include <iomanip> 
using namespace std;
int input(float Res[] );
float Rt(float Res[], int);
float Is(float Res[], int);
void Vr(float Res[], int);
void display(float );
int main()
	{
    float ase[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int choice;
    float r, i;
    int counter = input(ase);
    cout << "Enter Your choice:"<<endl 
         << "1 for the total resistance: RT"<<endl
         << "2 for Calculate the resulting source current: Is"<<endl
         << "3 Determine the voltage across each resistor:"<<endl;
    cin >> choice;
    switch (choice)
	    {
	    case 1:
	    	r = Rt(ase,counter);
	    	cout<< "total resistance: "<< r << endl;
	    	break;
		case 2:
			i = Is(ase, counter);
			cout<< "The Net current in the circuit:"<<i<<endl;
			break;
		case 3:
			Vr(ase,counter);
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
		total=total+ Res[i];	
	return total;
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
void Vr(float Res[], int c)
	{
	float vr[10];
	float It= Is(Res, c);
	for(int i=0; i<c; i++)
		vr[i]=It * Res[i];
	for(int i=0; i<c; i++)
		cout<<"Voltage across: R"<< Res[i]<<" is: "<<vr[i]<<" V"<<endl<<endl;
	}












