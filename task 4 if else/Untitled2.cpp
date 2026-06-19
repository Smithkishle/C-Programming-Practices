#include<iostream>
using namespace std;
int main(){
float e,m,s,tot,perc;
cout<<"enter marks for english math and science: ";
cin>>e>>m>>s;

tot=e+m+s;
perc=(tot/300.0)*100.0;
cout<<"total marks are "<<tot<<endl;
cout<<"percentage is "<<perc<<endl;
if(perc>=50){
cout<<"student passed"<<endl;
}
else{
cout<<"student failed"<<endl;
}
return 0;
}
