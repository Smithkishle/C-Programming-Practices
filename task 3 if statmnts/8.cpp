#include<iostream>
using namespace std;
int main(){
	
float r,f,u,tot;
cout<<"enter room rent food and utility charges: ";
cin>>r>>f>>u;
tot=r+f+u;
cout<<"total expense is "<<tot;
if(tot>25000){
cout<<"high monthly expense";
}
}
