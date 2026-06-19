#include<iostream>
using namespace std;
int main(){
	int basic_salary=0;
	int rent_allowance=0;
	int med_allowance=0;
	float tax_percent=0;
	float tax_deduction;
	cout<<"Please enter your basic salary:"<<endl;
	cin>>basic_salary;
	cout<<"Please enter your rent allowance"<<endl;
	cin>>rent_allowance;
	cout<<"Please enter your medical allowance"<<endl;
	cin>>med_allowance;
	cout<<"Please enter the tax percentage"<<endl;
	cin>>tax_percent;
	int gross = basic_salary+rent_allowance+med_allowance;
	
	cout<<"Your gross salary is"<<gross<<endl;
	tax_deduction=gross*tax_percent/100;
	int net_salary=basic_salary-tax_deduction;
	cout<<"Your tax deduction is"<<tax_deduction<<endl;
	cout<<"Your net salary is"<<net_salary;
	
}
