#include <iostream>
using namespace std;
int main(){
	string password="admin123";
	string input;
	int i=1;
	while(i>0){
		cout<<"please enter the password"<<endl;
		cin>>input;
		if(input==password){
			break;
		}
		i++;
	}
	cout<<"Access granted";
}
