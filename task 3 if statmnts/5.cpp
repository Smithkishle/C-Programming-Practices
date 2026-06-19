#include<iostream>
using namespace std;
int main(){
float fuel,price,charge,total;
cout<<"enter fuel in liters, price per liter ,extra charge: ";
cin>>fuel>>price>>charge;
total=(fuel*price)+charge;
cout<<"total cost is "<<total;
if(total>3000){
cout<<"fuel cost is high";
}
return 0;
}
