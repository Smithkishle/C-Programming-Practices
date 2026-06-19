#include <iostream>
using namespace std;
int main(){
	
	int units;
	int bill;
	cout<<"Enter the consumed units"<<endl;
	cin>>units;
	if (units<=100){
		bill=units*5;
	}
	else if(units>100 && units<=200)
	{
		bill=units*8;
	}
	else if (units>200 && units<=300){
	
	bill=units*10;
}
else {
	bill=units*12;
}
cout<<"Your total bill is "<<bill<<"Rs";
}

