#include <iostream>
using namespace std;
int main(){
	int ward,room,days,medcharges,roomcharges,discount,tax,bill,doctorfee=2000;
	cout<<"Select your ward type:\n1 for General \n2 for Semi-Private \n3 for Private"<<endl;
	cin>>ward;
	cout<<"Select room categories:\n 1 for AC \n 2 for Non Ac"<<endl;
	cin>>room;
	cout<<"Enter your days"<<endl;
	cin>>days;
	cout<<"Enter medicine charges"<<endl;
	cin>>medcharges;
	switch (ward){
		case 1:
			switch(room){
				case 1:
					roomcharges=2500;
					break;
				case 2:
				    roomcharges=2000;
					break;	
			}
		case 2:
		    switch(room){
				case 1:
					roomcharges=4500;
					break;
				case 2:
				    roomcharges=3800;
					break;	
			}
		case 3:
		    switch(room){
				case 1:
					roomcharges=7500;
					break;
				case 2:
				    roomcharges=6500;
					break;	
			}	
			
	}
	if(days>6){
		discount=roomcharges*0.05;
	}
	bill=(roomcharges*days)+doctorfee+medcharges-discount;
	if (bill>25000){
		tax=bill*0.08;
		bill=bill-tax;
	}
	cout<<"Your final bill is"<<bill;
}

