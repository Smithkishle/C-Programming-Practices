#include<iostream>
using namespace std;
int main(){
float d,f,m,eff,extra,disc;
cout<<"enter distance fuel and maintenance: ";
cin>>d>>f>>m;
eff=d/f;
cout<<"fuel efficiency is "<<eff<<endl;
cout<<"base maintenance is "<<m<<endl;
if(eff<12){
extra=m*5.0/100.0;
m=m+extra;
cout<<"extra charges added final is "<<m<<endl;
}
else{
disc=m*3.0/100.0;
m=m-disc;
cout<<"discount added final is "<<m<<endl;
}
return 0;
}
