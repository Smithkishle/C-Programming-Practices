#include <iostream>
using namespace std;
int main(){
	float distance,fuel_con,mainten_charge,fuel_eff=0;
	cout<<"In put distance traveled,fuel,consumed,maintenance cost:"<<endl;
	cin>>distance>>fuel_con>>mainten_charge;
	fuel_eff=distance/fuel_con;
	float amc;
	if(fuel_eff<12){
		amc=mainten_charge*0.05;
		mainten_charge=mainten_charge+amc;
		
	}
	else {
		amc=mainten_charge*0.03;
		mainten_charge=mainten_charge-amc;
	}
	cout<<"fuel eff is  "<<fuel_eff<<"and maintenance cost is"<<amc;
}
