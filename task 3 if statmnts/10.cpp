#include<iostream>
using namespace std;
int main(){
float d,f,t,tot;
cout<<"enter distance fare per km and toll: ";
cin>>d>>f>>t;
tot=(d*f)+t;
cout<<"total fare is "<<tot<<endl;
if(tot>4000){
cout<<"high travel cost"<<endl;
}
}
