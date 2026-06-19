#include<iostream>
using namespace std;
int main(){
float t1,t2,t3,avg;
cout<<"enter morning afternoon and evening temp: ";
cin>>t1>>t2>>t3;
avg=(t1+t2+t3)/3;
cout<<"average temp is "<<avg<<endl;
if(avg>40){
cout<<"high temperature warning";
}
return 0;
}
