#include <iostream>
using namespace std;
int main(){
	int customer,units,rate,basebill,finalbill;
	double surcharge,tax=0;
	cout<<"Select from the following:\n1 for Domestic users (households) \n2 for Commercial users (shops, offices, small businesses)\n3 for Industrial users (factories, large-scale production units)"<<endl;
	cin>>customer;
	cout<<"Please enter units consumed"<<endl;
	cin>>units;
	switch(customer){
		case 1:
			rate=12;
			break;
		case 2:
		    rate=18;
			break;
		case 3:
		    rate=25;
			break;				
	}
	basebill=rate*units;
	if(units>500){
		surcharge=basebill*0.05;
	}
	finalbill=basebill-surcharge;
	if(finalbill>10000){
		tax=finalbill*0.08;
	}
	finalbill=finalbill-tax;
	cout<<"your final bill is"<<finalbill<<"with surcharge"<<surcharge<<"with tax"<<tax;
}

