#include <iostream>
using namespace std;
int main(){
	int salary;
	float tax;
	cout<<"Enter salary"<<endl;
	cin>>salary;
	if (salary<=30000){
		tax=0;
	}
	else if (salary>30000 && salary<=60000){
		tax=salary*0.05;
	}
	else if (salary>60000 && salary<=100000)
	{ tax=salary*0.10;
	}
	else
	{
		tax=salary*0.15;
	}
	cout<<"YOur tax is"<<tax;
}
