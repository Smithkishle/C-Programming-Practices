#include <iostream>
using namespace std;
int main(){
	int balance=50000,amount;
	int option;
	cout<<"select \n 1 for Withdraw \n 2 for Deposit \n 3 for Balance Inquiry"<<endl;
	cin>>option;
	switch(option){
		case 1:
		cout<<"Enter withdrwal amopunt"<<endl;
		cin>>amount;
		if (amount<balance)
		cout<<"Withdraw succsesful";
		else 
		cout<<"Insuffiecint balance";
	}

}
