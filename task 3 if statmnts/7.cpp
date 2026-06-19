#include<iostream>
using namespace std;
int main(){
float u,c,r,bill;
cout<<"enter units consumed, cost per unit,meter rent: ";
cin>>u>>c>>r;
bill=(u*c)+r;
cout<<"electricity bill is "<<bill;
if(bill>6000){
cout<<"high bill";
}
}
