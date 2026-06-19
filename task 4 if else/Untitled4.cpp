#include<iostream>
using namespace std;
int main(){
float u,c,r,bill;
cout<<"enter units cost per unit and rent: ";
cin>>u>>c>>r;
bill=(u*c)+r;
if(bill>6000){
bill=bill+500;
}
cout<<"final bill amount is "<<bill<<endl;
return 0;
}
