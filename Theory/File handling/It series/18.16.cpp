//WRITE A PROGRAM THAT PRINTS A FILE ON THE PRINTER AS  WELL AS ON THE SCREEN
#include<iostream.h>
#include<fstream.h>
viod main()
{
	ofstream print;
	print.open("LPT1");
	print<<"Hello Printer...";
	print.close();
}
