#include<iostream>
using namespace std;
int main(){
int subj_1,subj_2,subj_3,subj_4,subj_5;
cout<<"Enter your marks for 1st Subject out of 100:"<<endl;
cin>>subj_1;
cout<<"Enter your marks for 2nd Subject out of 100:"<<endl;
cin>>subj_2;
cout<<"Enter your marks for 3rd Subject out of 100:"<<endl;
cin>>subj_3;
cout<<"Enter your marks for 4th Subject out of 100:"<<endl;
cin>>subj_4;
cout<<"Enter your marks for 5th Subject out of 100:"<<endl;
cin>>subj_5;
int total=subj_1+subj_2+subj_3+subj_4+subj_5;
float div=total/500.0;
float prcnt=div*100.0;
cout<<"Your total obtained marks from 500 are: "<<total<<" and your total percentage is: "<<prcnt;


}
