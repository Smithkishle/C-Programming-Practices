#include<iostream>
using namespace std;
int main(){
int PA,Time;
float rate;
float simple_interest;
cout<<"Please enter prnciple amount:"<<endl;
cin>>PA;
cout<<"Please enter rate of interest"<<endl;
cin>>rate;
cout<<"Please enter time in years"<<endl;
cin>>Time;
simple_interest=(PA*rate*Time)/100.0;
cout<<"Simple interest is "<<simple_interest;



}
