#include<iostream>
using namespace std;
int main(){
float p,q,d,tot,disc;
cout<<"enter price quantity and delivery: ";
cin>>p>>q>>d;
tot=(p*q)+d;
cout<<"total cost is "<<tot<<endl;
if(tot>5000){
disc=tot*5.0/100.0;
cout<<"discount is "<<disc<<endl;
}
else{
cout<<"no discount is applied"<<endl;
}
return 0;
}
