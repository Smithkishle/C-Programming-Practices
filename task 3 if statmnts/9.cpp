#include<iostream>
using namespace std;
int main(){
float p,q,d,tot,disc;
cout<<"enter price quantity and delivery: ";
cin>>p>>q>>d;
tot=(p*q)+d;
cout<<"total amount is "<<tot<<endl;
if(tot>10000){
disc=tot*5.0/100.0;
cout<<"discount amount is "<<disc<<endl;
}
return 0;
}
