#include<iostream>

using namespace std;
int main()
	{
	double gallons, miles, totalGallons = 0.0,
	totalMiles = 0.0, average;
	
	cout << "Enter the gallons used (-1 to end): ";
	cin >> gallons;
	
	while ( gallons != -1.0 ) 
		{
		totalGallons += gallons;
		
		cout << "Enter the miles driven: ";
		cin >> miles;
		totalMiles += miles;
		
		cout << "The Miles / Gallon for this tank was "<< miles / gallons<< "\n\nEnter the gallons used (-1 to end): ";
		cin >> gallons;
		}
	
	average = totalMiles / totalGallons;
	cout << "\nThe overall average Miles/Gallon was "<< average << endl;
	
	return 0;
	}
