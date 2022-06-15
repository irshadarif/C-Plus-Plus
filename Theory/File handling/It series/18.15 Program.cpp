//WRITE A PROGRAM THAT MANAGES A TELEPHONEE DIRECTORY
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#innclude<iomanip.h>
#include<conio.h>
class phonebook
{
	char name[20],phno[6];
	public:
	void getdata();
	void showdata();
	char*getname()
	{
		return name;
		
		}
		char*getphno()
		{
			return phno;
			
			}
			void update(char*nm,char*telno)
			{
				strcpy(name,nm);
				strcpy(phno,telno);
				
				}
			};
				void phonebook::getdata()	
						{
							cout<<"\nEnter Name: ";
							cin>>name;
							cout<<"Enter Phone No.:: ";
							cin>>phno;
							
						}
						void phonebook::showdata()
						{
							cout<<"\n"<<setw(15)<<name:
								cout<<setw(8)<<phno;
						}
						void main()
						phonebook rec;
						fstream file;
						file.open("c:\\phone.dat",ios::ate| ios::Init| ios::out|ios::binary);
						char ch,nm[20],telno[6];
						int choice,found=0;
						while(1)
						{
							cout<<"\n*****PhoneBook*****\n";
							cout<<"1)Add New Record\l";
							cout<<"2)Display All Records\n";
							cout<<"3)Search Telephone No.\n";
							
							cout<<"4)Search Person Name\n";
							cout<<"5)Update Telephone No.\n";
							
							cout<<"6)Exit\n";
							cout<<"Choose your Choice : ";
							cin>>choice;
							switch(choice)
							{
								case 1:
									rec.getdata();
									cin.get(ch);
									flie.write((char*)&rec,sizeof(rec));
									break;
									case 2:
										file.seekg(0,ios::beg);
										cout<<"\n\nRecords in PhoneBook\n";
										while(file)
										{
											flie.read((char*)&rec,sizeof(rec));
											if(!file.eof())
											rec.showdata();
											
										}
										file.clear();
										getch();
										break;
										case 3:
											cout<<"\nEnter Name: ";
											cin>>nm;
											file.seekg(0,ios::beg);
											found=0;
											while(file.read((char*)&rec,sizeof(rec)))
											{
												if(strcmp(nm,rec.getname())==0)
												{
													found=1;
													rec,showdata();
													
											
												}
											}
											
											file.clear();
											if(found==0)
											cout<<"\n\n---Record Not Found---\n";
											getch();
											break;
											case 4:
												cout<<"\n\nEnter Telephone No. ";
												cin>>Teleno;
												file.seekg(0,ios::beg);
												found=0;
												while(file.read((char*)&rec,sizeof(rec))
												{
													if(strcmp(teleno,rec.getphno())==0)
													{
														found=1;
														rec.showdata();
														
													}
												}
												file.clear();
												if(found==0)
												cout<<"\n\n---Record Not Found---\n";
												getch();
												break;
												case 5:
													cout<<"\n\nEnter Name: ";
													cin>>nm;
													file.seekg(0,ios::beg);
													found=0;
													int cnt=0;
													
													while(file.read((char*)&rec,sizeof(rec)))
													{
														cnt++;
														if(strcmp(nm,rec.getname())==0)
														{
															found=1;
															break;
															
														}
												
													}
													flie.clear();
													if(found==0)
													cout<<"\n\n---Recofr Not Found---\n";
													else
													{
														int location=(cnt-1)*sizeof(rec);
														cin.get(ch);
														if(file.eof())
														flie.clear();
														cout<<"Enter New Telephone No: ";
														cin<<"Telno";
														file.seekp(location);
														rec.update(nm,telno);
														file.write((char*)&rec,sizeof(rec));
														file.flush();
					
													}
											break;
											case 6:
												goto out;
											
							}
						}
						out:
							file.close();
}
