#include<iostream>
using namespace std;
int main(){
float d,f,t,tot,disc;
cout<<"enter distance fare and toll: ";
cin>>d>>f>>t;
tot=(d*f)+t;
cout<<"total fare is "<<tot<<endl;
if(tot>4000){
disc=tot*7.0/100.0;
cout<<"discount is "<<disc<<endl;
}
else{
cout<<"no discount is applied"<<endl;
}
return 0;
}
