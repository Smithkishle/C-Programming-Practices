#include<iostream>
using namespace std;
int main(){
	float units=0;
	int cost=0;
	cout<<"Please put how much units are consumed:"<<endl;
	cin>>units;
	cout<<"Put cost of each unit"<<endl;
	cin>>cost;
	cout<<"Your total electricity bill for this month is:"<<cost*units<<"Rupees";
	return 0;
	
}
