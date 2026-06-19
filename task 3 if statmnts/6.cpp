#include<iostream>
using namespace std;
int main(){
	
float p,d,n,tot,perc;
cout<<"enter marks for programming database and networking: ";
cin>>p>>d>>n;
tot=p+d+n;
perc=(tot/300.0)*100.0;
cout<<"total is "<<tot;
cout<<"percentage is "<<perc;
if(perc>=70){
cout<<"excellent performance";
}
}
