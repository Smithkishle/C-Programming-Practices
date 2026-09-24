#include <iostream>
using namespace std;
int bonus(int &a){
	a+=500;
	return a;
}
int main(){
	int wallet;
	cout<<"Enter the wallet amount"<<endl;
	cin>>wallet;
	bonus(wallet);
	cout<<"Your total amount with balance"<<wallet;
	
}
