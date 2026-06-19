#include<iostream>
using namespace std;
int main(){
int marks[10];
int max=marks[0];
int min=marks[0];
   for(int i=0 ;i<10;i++){
   	cout<<"Enter element at index"<<i<<endl;
   	cin>>marks[i];
   }
   for(int i=1;i<10;i++){
   	if(marks[i]>max){
	   max=marks[i];
   }
   else
   {min=marks[i];
   }
   cout<<endl;
   	
   }
   cout<<"Maximum marks are"<<max<<"and minimum marks are"<<min;
   }
