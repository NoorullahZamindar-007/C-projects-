#include<iostream>
using namespace std;

int main(){
	
	
	int quant,choice;
	
	//Quantity
	int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qchicken=0;
	//food items sold
	int srooms=0,spasta=0,sburger=0,snoodles=0,sshake=0,schicken=0;
	// total prace of items
	int Total_room=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
	
	
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms aviliable:";
	cin>>qrooms;
	cout<<"\n Quantity of pasta:";
	cin>>qpasta;
	cout<<"\n Quantity of burger:";
	cin>>qburger;
	cout<<"\n Quantity of noodles:";
	cin>>qnoodles;
	cout<<"\n Quantity of shake:";
	cin>>qshake;
	cout<<"\n Quantity of chicken:";
	cin>>qchicken;
	
	m:
	cout<<"\n\t\t please select from the menu options";
	cout<<"\n\n1) room";
	cout<<"\n2) pasta";
	cout<<"\n3) burger";
	cout<<"\n4) noodles";
	cout<<"\n5) shake";
	cout<<"\n6) chicken";
	cout<<"\n7) Information regarding sales and collection";
	
	cout<<"\n8) Exit";
	
	cout<<"\n\n please Enter your Choice!";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms your want:";
			cin>>quant;
			if(qrooms-srooms>=quant)
			{
				srooms=srooms+quant;
				Total_room=Total_room+quant*1200;
				cout<<"\n\n\t\t"<<quant<<"room\rooms have been alloted to you!";
			}
			else
			
				cout<<"\n\tonly"<<qrooms-srooms<<"rooms remaining in hotel";
				break;
				
				case 2:
			cout<<"\n\n Enter pasta quantity:";
			cin>>quant;
			if(qpasta-spasta>=quant)
			{
				spasta=spasta+quant;
				Total_pasta=Total_pasta+quant*250;
				cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
			}
			else
			
				cout<<"\n\tonly"<<qpasta-spasta<<"pasta remaining in hotel";
				break;
				
				case 3:
			cout<<"\n\n Enter burger quantity:";
			cin>>quant;
			if(qburger-sburger>=quant)
			{
				sburger=sburger+quant;
				Total_burger=Total_burger+quant*120;
				cout<<"\n\n\t\t"<<quant<<"burger is the order!";
			}
			else
			
				cout<<"\n\tonly"<<qburger-spasta<<"burger remaining in hotel";
				break;
			
			case 4:
			cout<<"\n\n Enter noodles quantity:";
			cin>>quant;
			if(qnoodles-snoodles>=quant)
			{
				snoodles=snoodles+quant;
				Total_noodles=Total_noodles+quant*140;
				cout<<"\n\n\t\t"<<quant<<"noodles is the order!";
			}
			else
			
				cout<<"\n\tonly"<<qnoodles-snoodles<<"noodles remaining in hotel";
				break;
				
				case 5:
			cout<<"\n\n Enter shake quantity:";
			cin>>quant;
			if(qshake-sshake>=quant)
			{
				sshake=sshake+quant;
				Total_shake=Total_shake+quant*120;
				cout<<"\n\n\t\t"<<quant<<"shake is the order!";
			}
			else
			
				cout<<"\n\tonly"<<qshake-sshake<<"shake remaining in hotel";
				break;
				
				case 6:
			cout<<"\n\n Enter chicken quantity:";
			cin>>quant;
			if(qchicken-schicken>=quant)
			{
				schicken=schicken+quant;
				Total_chicken=Total_chicken+quant*150;
				cout<<"\n\n\t\t"<<quant<<"chicken is the order!";
			}
			else
			
				cout<<"\n\tonly"<<qchicken-schicken<<"chicken remaining in hotel";
				break;
				
				case 7:
					
					cout<<"\n\t\tDetails of sales and collection";
					cout<<"\n\n Numbers of rooms we had:"<<qrooms;
					cout<<"\n\n Numbers of rooms we gave for rent"<<srooms;
					cout<<"\n\n Remaining rooms:"<<qrooms-srooms;
					cout<<"\n\n Total rooms collection for the day:"<<Total_room;
					
					cout<<"\n\n Numbers of pasta we had:"<<qpasta;
					cout<<"\n\n Numbers of pasta we sold:"<<spasta;
					cout<<"\n\n Remaining pasta:"<<qpasta-spasta;
					cout<<"\n\n Total pasta collection for the day:"<<Total_pasta;
					
					cout<<"\n\n Numbers of burger we had:"<<qburger;
					cout<<"\n\n Numbers of burger we sold:"<<sburger;
					cout<<"\n\n Remaining burger:"<<qburger-sburger;
					cout<<"\n\n Total burger collection for the day:"<<Total_burger;
					
					cout<<"\n\n Numbers of noodles we had:"<<qnoodles;
					cout<<"\n\n Numbers of noodles we sold:"<<snoodles;
					cout<<"\n\n Remaining noodles:"<<qnoodles-snoodles;
					cout<<"\n\n Total noodles collection for the day:"<<Total_noodles;
					
					cout<<"\n\n Numbers of shake we had:"<<qshake;
					cout<<"\n\n Numbers of shake we sold:"<<sshake;
					cout<<"\n\n Remaining shake:"<<qshake-sshake;
					cout<<"\n\n Total shake collection for the day:"<<Total_shake;
					
					cout<<"\n\n Numbers of chicken we had:"<<qchicken;
					cout<<"\n\n Numbers of chicken we sold:"<<schicken;
					cout<<"\n\n Remaining chicken:"<<qchicken-schicken;
					cout<<"\n\n Total chicken collection for the day:"<<Total_chicken;
					
					cout<<"\n\n\n Total collection for the day:"<<Total_room+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
					 break;
					
					case 8:
						
						exit(0);
						
						default:
							cout<<"\n please select the numbers mentioned above!";				
	}
goto m;	
}