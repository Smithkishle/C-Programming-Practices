#include <iostream>
using namespace std;
int main() {
    float item1, item2, item3;
    float totalcost;
    cout<<"Enter the prices for item 1, item 2, and item 3 ";
    cin>>item1>>item2>>item3;
    totalcost =item1+item2+item3;

    cout<<"Total Bill: "<<totalcost<<endl;
    if (totalcost > 5000) {
        cout<<"High Purchase Amount"<<endl;
    }

    return 0;
}
