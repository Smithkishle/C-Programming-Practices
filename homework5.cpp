#include<iostream>
using namespace std;
int main(){
float pkr,usd,eur=0;
float total1,total2;
cout<<"Write the amount in pkr"<<endl;
cin>>pkr;
cout<<"Write the exchange rate of USD to PKR:"<<endl;
cin>>usd;
cout<<"Write the exchange rate of EUR to PKR:"<<endl;
cin>>eur;
total1=pkr*usd;
total2=pkr*eur;
cout<<"The current amount(pkr) in USD is "<<total1<<"  in EUR is "<<total2;


}
