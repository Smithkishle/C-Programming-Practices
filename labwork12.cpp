#include <iostream>
using namespace std;
int main(){
	int num=71;
	int guess;
	cout<<"Please enter your guess"<<endl;
	cin>>guess;
	while(guess!=num){
		cout<<"Wrong guess. Please try again"<<endl;
		cin>>guess;
		
	}
	cout<<"Correct Guess";
	



}
