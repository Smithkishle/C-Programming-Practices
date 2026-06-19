#include <iostream>
using namespace std;
int main(){
	int recharge;
	cout<<"Enter recharge amount"<<endl;
	cin>>recharge;
	if(recharge<300 && recharge>=100){
	
	cout<<"Basic Activated";
}
else if(recharge<500 && recharge>=300){
    	cout<<"Standered activated";
	}
	else if(recharge>=500){
		cout<<"Premium activated";
	}
	else
	{ 
		cout<<"Insufficient recharge";
	}
}
