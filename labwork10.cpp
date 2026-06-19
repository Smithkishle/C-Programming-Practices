#include <iostream>
using namespace std;
int main(){
	int startpoint=0;
	int endpoint=0;
	cout<<"Starting point"<<endl;
	cin>>startpoint;
	cout<<"Ending point"<<endl;
	cin>>endpoint;
	if(startpoint%2==0){
	startpoint++;
	}
	while(startpoint<endpoint){
		cout<<startpoint<<endl;
		startpoint+=2;
	}
	
}
