#include<iostream>
using namespace std;
int main(){
	int start;
	cout<<"Enter starting number";
	cin>>start;
	int count=1;
	do{
		if(start%2==0){
			start=start+1;
		}
		cout<<start<<endl;
		start++;
		count++;
	}
	while(count<=20);


}
