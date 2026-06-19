#include <iostream>
using namespace std;
int main(){
int selection;
cout<<"Please select from the given menu:"<<endl;
cout<<"Put 1 for Tea."<<endl;
cout<<"Put 2 for Coffee."<<endl;
cout<<"Put 3 for Juice."<<endl;
cout<<"Put 4 for Milkshake."<<endl;
cin>>selection;
switch(selection){
	case 1:
		cout<<"You have ordered tea."<<endl;
		break;
	case 2:
		cout<<"You have ordered coffee."<<endl;
		break;
	case 3:
		cout<<"You have ordered Juice."<<endl;
		break;
	case 4:
		cout<<"You have ordered milkshake."<<endl;
		break;
		default:
			cout<<"Invalid selection";
}
 
}
