#include <iostream>
using namespace std;
int main() {
    int balance,withdrawal;
    cout<<"enter your intial balance: ";
    cin>>balance;

    while(balance>0) {
        cout<<"Current balance: Rs. " <<balance;
        cout<<"Enter withdrawal amount: ";
        cin>>withdrawal;

        if(withdrawal <= 0) {
            cout<<"Invalid amount.";
            continue;
        }

        if(withdrawal > balance) {
            cout << "Insufficient balance. Try a smaller amount.\n";
            continue;
        }

        balance = balance - withdrawal;
        cout << "Remaining Balance: Rs. "<<balance;
    }

    cout << "\nATM session ended. Balance is 0 or less.\n";
    return 0;
}
