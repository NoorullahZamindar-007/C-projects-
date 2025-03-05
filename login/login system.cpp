#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
	
	int c;
	cout<<"\t\t\t_____________________________________________\n\n\n";
	cout<<"\t\t\t             Welcome to login page           \n\n\n";
	cout<<"\t\t\t_____________      Menu       _______________\n\n";
	cout<<"                                                   \n\n";
	cout<<"\t| press 1 to login                      |"<<endl;
	cout<<"\t| press 2 to Regester                   |"<<endl;
	cout<<"\t| press 3 if you forgot your password   |"<<endl;
	cout<<"\t| press 4 to EXIT                       |"<<endl;
	cout<<"\n\t\t\t pless enter your choice  :";
	cin>>c;
	cout<<endl;
	
	switch(c){
		
		
		case 1:
			
			login();
			break;
			
		case 2: 
		    registration();
		    break;
		case 3:
		    forgot();
			break;
		case 4:
		    cout<<"\t\t\t Thank you! \n\n";
			break;
		default:
			system("cls");
		    cout<<"\t\t\t Please select from the option given above \n"<<endl;
			main();		    		
		
	}
	
}

  void login(){
  	
  	int count;
  	string userid, password,id,pass;
  	system("cls");
  	cout<<"\t\t\t Please Enter the username and password :"<<endl;
  	cout<<"\t\t\t USERNAME ";
  	cin>>userid;
  	cout<<"\t\t\t PASSWORD ";
  	cin>>password;
  	
  	ifstream input("record.txt");
  	
  	while(input>>id>>pass){
  		
  		  if(id==userid && pass==password)
  		  {
  		  	count=1;
  		  	system("cls");
			}
  		
	  }
  	  input.close();
  	  
  	  if(count==1)
  	  {
  	  	cout<<userid<<"\n Yor login is succsessfull \n Thanks for logging in ! \n";
  	  	main();
  	  	
		}
		else{
			cout<<"\n LOGIN ERROR \n please check your username and password\n";
			main();
		}
  }
  
  
  void regestration(){
  	
  	string ruserid,rpassword,rid,rpass;
  	system("cls");
  	cout<<"\t\t\t Enter the username: ";
  	cin>>ruserid;
  	cout<<"\t\t\t Enter the password: ";
  	cin>>rpassword;
  	
  	ofstream f1("records.txt", ios::app);
  	f1<<ruserid<<' '<<rpassword<<endl;
  	system("cls");
  	cout<<"\n\t\t\t Registartion is successfull !\n";
  	main();
  	
  }
  void forgot(){
  	
  	int option;
  	system("cls");
  	cout<<"\t\t\t you forgot the password? No worries \n";
  	cout<<"Press 1 to search your id by username"<<endl;
  	cout<<"pess 2 to go back to the menu "<<endl;
  	cout<<"\t\t\t Enter your choice :";
  	cin>>option;
  	switch(option)
  	{
  		case 1 :
  			{
  				int count=0;
  				string suserid,sid,spass;
  				cout<<"\n\t\t\t Enter your user name which you remembered :";
  				cin>>suserid;
  				
  				ifstream f2("records.txt");
  				while(f2>>sid>>spass)
  				{
  					if(sid==suserid)
  					{
  						count=1;
					  }
				  }
				  f2.close();
				  if(count==1)
				  {
				  	cout<<"\n\n your account is found!\n";
				  	cout<<"\n\n your password is : "<<spass;
				  	main();
				  }
				  else{
				  	cout<<"\n\t SOORY YOUR ACOUNT IS NOT FOUND! \n";
				  main();
				  }
				 break; 
			  }
			  
			  case 2 :
			  	{
			  		 main();
				  }
				  default :
				  	cout<<"\t\t\t Wrong choice ! please try again "<<endl;
				  	forgot();	  
	  }
	  
  	
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
