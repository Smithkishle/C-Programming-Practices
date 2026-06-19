#include <iostream>
using namespace std;
int main (){
	int salary,years;
	cout<<"Enter monthly salary and experience years"<<endl;
	cin>>salary>>years;
	if (salary>=50000 && years>=2)
	cout<<"eligible";
	else if(salary>=40000 && years>=3)
	cout<<"eligible";
	else if (salary>=30000 && years>=5)
		cout<<"eligible";
		else 
			cout<<" not eligible";
}
