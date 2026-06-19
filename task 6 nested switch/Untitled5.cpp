#include <iostream>
using namespace std;
int main(){
	int faculty,degree,marks,fee,finalfee;
	double discount;
	cout<<"enter marks in percent"<<endl;
	cin>>marks;
	cout<<"The faculties available are:\n1 for Computer Science\n2 for Business Administration \n3 for Engineering"<<endl;
	cin>>faculty;
	switch(faculty){
        case 1:
            cout << "Select Program:";
            cout << "1. BSCS - Rs. 45000\n";
            cout << "2. BSIT - Rs. 40000\n";
            cout << "Enter choice: ";
            cin >> degree;

            switch(degree) {
                case 1: fee = 45000; 
				break;
                case 2: fee = 40000; 
				break;
                default:
				cout << "Invalid";
            }
            break;
        case 2:
            cout << "Select Program:";
            cout << "1. BBA - Rs. 35000\n";
            cout << "2. MBA - Rs. 50000\n";
            cout << "Enter choice: ";
            cin >>degree;

            switch(degree) {
                case 1: fee = 35000;
				break;
                case 2: fee = 50000;
				break;
                default: 
				cout << "Invalid";
            }
            break;
		case 3:
            cout<< "Select Program:";
            cout<< "1. Civil Engineering - Rs. 55000\n";
            cout<< "2. Electrical Engineering - Rs. 60000\n";
            cout<< "Enter choice: ";
            cin>>degree;

            switch(degree) {
                case 1: fee = 55000; 
				break;
                case 2: fee = 60000;
				break;
                default:cout<<"Invalid"; 
            }
            break;

        default:
            cout << "Invalid Faculty";	    
	}
	if (marks>=85) {
        discount=0.20;
    } else if (marks>=70 && marks<85) {
        discount=0.10;
    } else {
        discount=0.00;}

    finalfee=fee-(fee*discount);
    cout<<"final fee is"<<finalfee;

}
