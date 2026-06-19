#include <iostream>
using namespace std;
int main(){
	string pass="admin123";
	do{
		cout<<"Enter password"<<endl;
		cin>>pass;
	}
	while(pass!="admin123");
	
	
	cout<<"Access Granted";
	
	
}
