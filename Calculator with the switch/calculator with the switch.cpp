#include<iostream>
using namespace std;
int main(){
	
	
	
	
	double var1,var2;
	
	beginning:
		system("cls");
	
	cout<<"Enter your first number  :"<<endl;
	cin>> var1;
	cout<<"Enter your secound number   :"<<endl;
	cin>> var2;
	
	
	cout<<"What do you want to do with that number ?"<<endl;
	cout<< "+  add"<<endl;
	cout<<" -  sub"<<endl;
	cout<<" *  mul"<<endl;
	cout<<" /  div"<<endl;
	
	char decision;
	
	cin>> decision;
	system("cls");
	
	switch(decision){
		
		case '+':
		cout<< var1  <<"   +   "<<var2 <<" = "<< (var1+var2)<<endl;
		break;
		
		case '-':
		cout<< var1  <<"   -   "<<var2 <<" = "<< (var1-var2)<<endl;
		break;
		
		
		case '*':
		cout<< var1  <<"   *   "<<var2 <<" = "<< (var1*var2)<<endl;
		break;
		
		
		case '/':
			if(var2!=0)
		cout<< var1  <<"   /   "<<var2 <<" = "<< (var1/var2)<<endl;
		else 
		cout<<"you can not divide by 0!";
		break;
		
		
		default :
			cout<<"You typed wrong character !!";
		
		
		
	}
	
	char decision2;
	cout<<"Do you want to continue that program ?   (Y/N)";
	cin>>decision2;
	
	if(decision == 'Y' || decision2 == 'y')
	goto beginning;
	
	
}