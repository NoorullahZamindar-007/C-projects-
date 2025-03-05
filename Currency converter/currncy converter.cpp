#include<iostream>
using namespace std;
int main(){
	char startvalue;
	char selectagain;
	float converter(void);
	start:

cout<<"*************** Welcome To Currency CONVERTER Application ***************"<<endl;

cout<<"********* Please folleo the instruciton **********"<<endl;
cout<<"You can have currencies Dollar , Rupees , Euro ,Pound"<<endl;
cout<<"You can type a,b,c,d rspectively for currencies dollar , rupees , euro , pound"<<endl;
cout<<"ENter currency 1 which you want to convert"<<endl;
cout<<"Enter value for currency 1 "<<endl;
cout<<"Enter currency to in which you want to convert currency 1"<<endl;
cout<<"(a) dollar  (b)rupees (c)euro  (d) pound"<<endl;

cout<<"Plese press s to start"<<endl;
     selectchoice:
         cin>>startvalue;
   if(startvalue=='s' ||  startvalue=='S'){
	
	float finalvalue=converter();
	cout<<"Result is "<<finalvalue<<endl;
	cout<<"Do you want to use app again  y/n"<<endl;
	typeagain:
	cin>>selectagain;
	if(selectagain=='y'  ||  selectagain=='Y'){
		goto start;
	}
	else if(selectagain=='n'  ||  selectagain=='N'){
		
		cout<<"Thank you for using our app"<<endl;
	}
	else {
		cout<<"You have enter wrong value"<<endl;
		goto typeagain;
	}
}
    else{
    	cout<<"You have enter wrong value please type s"<<endl;
    	goto selectchoice;
    	
	}
}

float converter(){
	char currname1,currname2;
	float currency1;
	float currency2;
	currlevel:
	cout<<"Enter currency 1 Name :"<<endl;
	cin>>currname1;
	cout<<"Enter currency 1 valur :"<<endl;
	cin>>currency1;
	switch(currname1){
		
		case 'a':
			currlevel1:
			cout<<"enter currency 2 name"<<endl;
			cin>>currname2;
			if(currname2 =='a' || currname2=='A'){
				currency2=currency1*1;
			}
			else if( currname2=='b' || currname2=='B'){
				currency2=currency1*73.84;
			}
			
			else if( currname2=='c' || currname2=='C'){
				currency2=currency1*0.85;
			}
			else if( currname2=='d' || currname2=='D'){
				currency2=currency1*0.72;
			}
			else{
				cout<<"You have entered wrong value, please type again"<<endl;
			goto currlevel1;
		
			}
			break;
			
					case 'b':
			currlevel2:
			cout<<"enter currency 2 name"<<endl;
			cin>>currname2;
			if(currname2 =='a' || currname2=='A'){
				currency2=currency1*0.01;
			}
			else if( currname2=='b' || currname2=='B'){
				currency2=currency1*1;
			}
			
			else if( currname2=='c' || currname2=='C'){
				currency2=currency1*0.01;
			}
			else if( currname2=='d' || currname2=='D'){
				currency2=currency1*0.009;
			}
			else{
				cout<<"You have entered wrong value, please type again"<<endl;
			goto currlevel2;
		
			}
			break;
			
							case 'c':
			currlevel3:
			cout<<"enter currency 2 name"<<endl;
			cin>>currname2;
			if(currname2 =='a' || currname2=='A'){
				currency2=currency1*1.16;
			}
			else if( currname2=='b' || currname2=='B'){
				currency2=currency1*86.37;
			}
			
			else if( currname2=='c' || currname2=='C'){
				currency2=currency1*1;
			}
			else if( currname2=='d' || currname2=='D'){
				currency2=currency1*0.85;
			}
			else{
				cout<<"You have entered wrong value, please type again"<<endl;
			goto currlevel3;
			}
			break;
							case 'd':
			currlevel4:
			cout<<"enter currency 2 name"<<endl;
			cin>>currname2;
			if(currname2 =='a' || currname2=='A'){
				currency2=currency1*1.37;
			}
			else if( currname2=='b' || currname2=='B'){
				currency2=currency1*101.20;
			}
			
			else if( currname2=='c' || currname2=='C'){
				currency2=currency1*1.17;
			}
			else if( currname2=='d' || currname2=='D'){
				currency2=currency1*1;
			}
			else{
				cout<<"You have entered wrong value, please type again"<<endl;
			goto currlevel4;
		
			}
			break;
			default:{
				cout<<"You have entered wrong value, please type again"<<endl;
			goto currlevel;
		
				break;
			}
	}
	
	return currency2;  
}