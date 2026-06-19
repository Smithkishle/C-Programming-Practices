#include<iostream>
using namespace std;
int main(){
float r,f,u,tot;
cout<<"enter room rent food and utility: ";
cin>>r>>f>>u;
tot=r+f+u;
if(tot>25000){
cout<<"expenses exceeded limit"<<endl;
}
else{
cout<<"expenses within limit"<<endl;
}
return 0;
}
