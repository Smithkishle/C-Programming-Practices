#include <iostream>
using namespace std;

int main() {
    double total_hours, hourly_rate;
    double normal_pay, overtime_pay = 0.0, total_salary;

    cout << "Enter total working hours: ";
    cin >> total_hours;
    
    cout << "Enter hourly rate: $";
    cin >> hourly_rate;

    if (total_hours > 40) {
        normal_pay = 40 * hourly_rate;
        overtime_pay = (total_hours - 40) * (hourly_rate * 1.5); 
    } else {
        normal_pay = total_hours * hourly_rate;
    }

    total_salary = normal_pay + overtime_pay;

    cout << " Salary Slip";
    cout << "Normal Pay: $" << normal_pay << endl;
    cout << "Overtime Pay: $" << overtime_pay << endl;
    cout << "Total Salary: $" << total_salary << endl;
}
