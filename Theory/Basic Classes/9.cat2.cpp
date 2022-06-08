// Demonstrates declaration of a class and
 // definition of an object of the class,

 #include <iostream> // for cout
 using namespace std;

class Cat // declare the class object
	{
	private:// members which follow are public
		int itsAge;
		int itsWeight;
	public:
		void setAge()
			{
		 	cout<<"enter age:"<<"\t";
		 	cin>>itsAge;	
			}
		void printAge()
			{
			cout<<"age is:"<<itsAge<<endl;
			cout<<endl; 
			}
		void setWeight()
			{
			cout<<"enter weight:"<<"\t";
			cin>>itsWeight;
			}
		void printweight()
			{
			cout<<"weoght is:"<<"\t"<<itsWeight;
			}	
	};
main()
	{
	Cat Frisky;
	Frisky.setAge(); // assign to the member variable
	Frisky.printAge();
	 
	Frisky.setWeight();
	Frisky.printweight();
	return 0;
	}
