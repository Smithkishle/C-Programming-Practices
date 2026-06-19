#include<iostream>
using namespace std;
int main(){
float t,a,m,perc;
cout<<"enter total attended and medical classes: ";
cin>>t>>a>>m;
perc=((a+m)/t)*100.0;
cout<<"attendance is "<<perc<<endl;
if(perc>=75){
cout<<"eligible for exam"<<endl;
}
else{
cout<<"not eligible for exam"<<endl;
}
return 0;
}
