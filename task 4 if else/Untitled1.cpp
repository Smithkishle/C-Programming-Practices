#include<iostream>
using namespace std;
int main(){
float b,h,m,tot,bonus;
cout<<"enter basic house rent and medical: ";
cin>>b>>h>>m;
tot=b+h+m;
cout<<"total salary is "<<tot<<endl;
if(tot>40000){
bonus=tot*10.0/100.0;
cout<<"bonus is "<<bonus<<endl;
}
else{
cout<<"no bonus granted"<<endl;
}
return 0;
}
