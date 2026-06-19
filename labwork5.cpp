#include <iostream>
using namespace std;
int main(){
float price=0,quantity=0,delievery=0,discountper=0,total=0,discount=0;
cout<<"Enter price,quantity,delievery charges,discount"<<endl;
cin>>price>>quantity>>delievery>>discountper;
total=price*quantity;
if(total>5000){
	discount=total*discountper/100;
	total=total-discount+delievery;
	
	
}
cout<<"Your total with delievery is:"<<total<<"and discount is:"<<discount<<endl;
}




