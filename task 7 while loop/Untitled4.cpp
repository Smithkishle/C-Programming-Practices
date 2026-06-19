#include <iostream>
using namespace std;
int main(){
	int guess=8;
	int num;
	int i=1;
	while(i>0){
		cout<<"Guess the number"<<endl;
		cin>>num;
		if(num==guess){
			break;
		}
		i++;
	}
	cout<<"Number guessed";
}
