#include <iostream>
using namespace std;
int main(){
int selection;
int quantity=0;
int teaprice=20;
int coffeeprice=30;
int juiceprice=15;
int milkshake=10;
cout<<"Please select from the given menu:"<<endl;
cout<<"Put 1 for Tea."<<endl;
cout<<"Put 2 for Coffee."<<endl;
cout<<"Put 3 for Juice."<<endl;
cout<<"Put 4 for Milkshake."<<endl;
cin>>selection;
switch(selection){
	case 1:
		cout<<"Please select quantity of tea."<<endl;
		cin>>quantity;
		cout<<"You have ordered"<<quantity<<"And your total bill is"<<teaprice*quantity<<"$"<<endl;
		break;
	case 2:
		cout<<"Please select quantity of coffee."<<endl;
		cin>>quantity;
		cout<<"You have ordered"<<quantity<<"And your total bill is"<<coffeeprice*quantity<<"$"<<endl;
		break;
	case 3:
		cout<<"Please select quantity for Juice."<<endl;
		cin>>quantity;
		cout<<"You have ordered"<<quantity<<"And your total bill is"<<juiceprice*quantity<<"$"<<endl;
		break;
	case 4:
		cout<<"Please select quanity for Milkshake."<<endl;
		cin>>quantity;
		cout<<"You have ordered"<<quantity<<"And your total bill is"<<milkshake*quantity<<"$"<<endl;
		break;
		default:
			cout<<"Invalid selection";
}
}
