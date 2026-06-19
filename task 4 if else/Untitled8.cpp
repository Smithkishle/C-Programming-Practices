#include<iostream>
using namespace std;
int main(){
float l,r,p,intamt,tot,pen,disc;
cout<<"enter loan amount interest rate and processing fee: ";
cin>>l>>r>>p;
intamt=l*8.0/100.0;
tot=l+intamt+p;
cout<<"interest amount is "<<intamt<<endl;
cout<<"payable amount is "<<tot<<endl;
if(tot>100000){
pen=tot*2.0/100.0;
tot=tot+pen;
cout<<"penalty added final is "<<tot<<endl;
}
else{
disc=tot*1.0/100.0;
tot=tot-disc;
cout<<"discount given final is "<<tot<<endl;
}
return 0;
}
