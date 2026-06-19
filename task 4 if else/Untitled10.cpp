#include<iostream>
using namespace std;
int main(){
float p1,p2,p3,tot,serv,final,extra,disc;
cout<<"enter three prices: ";
cin>>p1>>p2>>p3;
tot=p1+p2+p3;
serv=tot*3.0/100.0;
final=tot+serv;
cout<<"total cost is "<<tot<<endl;
cout<<"service charge is "<<serv<<endl;
if(tot>12000){
extra=final*2.0/100.0;
final=final+extra;
cout<<"extra applied final is "<<final<<endl;
}
else{
disc=final*2.0/100.0;
final=final-disc;
cout<<"discount applied final is "<<final<<endl;
}
return 0;
}
