#include <iostream>
using namespace std;

int main() {
    int books=0;
    char choice;

    while(books<5) {
        cout<<"Borrow a book? (y/n): ";
        cin>>choice;

        if (choice=='y'||choice=='Y') {
            books++;
            cout<<"Book borrowed. Total books: "<<books<<endl;
        } else if (choice=='n'||choice=='N') {
            break;
        } else {
            cout<<"Invalid. Enter y or n.\n";
        }
    }

    cout<<"Limit reached or stopped. Total books borrowed: " << books<< endl;
    return 0;
}
