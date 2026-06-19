#include <iostream>
using namespace std;
int main() {
    double basicsalary, houserent, medicalallowance, totalsalary, bonus;
    cout << "Enter Basic Salary and houseallownce and medicalallowance,total salary and bonus: ";
    cin >>basicsalary>>houserent>>medicalallowance>>totalsalary>>bonus;
    totalsalary = basicsalary + houserent + medicalallowance;
    cout << "total salary: " << totalsalary << endl;

    if (totalsalary > 40000) {
        bonus = totalsalary * 10.0 / 100.0; 
        cout << "Bonus Awarded: " << bonus << endl;
    }

    return 0;
}
