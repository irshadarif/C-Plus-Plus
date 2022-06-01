/*  
Write a structure that declare a structure that store BookID, price and pages of a book. 
It defines three structure varibales and inpute values. 
It display te record of most costly book.
*/
#include<iostream>
using namespace std;

struct book
	{
	int id, 
	int pages;
	float price;
	};
int main()
	{	
	book b1,b2;
	cout<<"Enter id, pages and price of book: ";
	cin>>b1.id>>b1.pages>>b1.price;
	cout<<"Enter id, pages and price of book: ";
	cin>>b2.id>>b2.pages>>b2.price;	
	cout<<"\nThe most costly book is as follows: \n";
	if(b1.price >b2.price)
		{
		cout<<"BookID: "<<b1.id<<endl;
		cout<<"Pages: "<<b1.pages<<endl;
		cout<<"Price: "<<b1.price<<endl;
		}
	else
		{
		cout<<"BookID: "<<b2.id<<endl;
		cout<<"Pages: "<<b2.pages<<endl;
		cout<<"Price: "<<b2.price<<endl;
		}
	}
