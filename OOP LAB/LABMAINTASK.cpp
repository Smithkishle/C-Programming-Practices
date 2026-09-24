#include<iostream>
using namespace std;
class Employee{
	private:
	string name;
	int salary;
	int age;
	public:
	Employee(){
		cout<<"Deafult constructor called"<<endl;
		name="No name";
		salary=0;
		age=0;
	}
	Employee(string n,int s,int a){
		name=n;
		salary=s;
		age=a;
	}
	void disp(){
		cout<<"Name ="<<name<<endl;
		cout<<"Salary ="<<salary<<endl;
		cout<<"Age ="<<age;
		if(salary>=50000){
			cout<<"Eligible for bonus";
		}
		else {
			cout<<"not eligible";
		}
		cout<<endl;
		cout<<endl;
	}
	string getname(){
		return name;
	}
	int getsalary(){
		return salary;	
	}
	int getage(){
		return age;
	}
};
	int main(){
		Employee s[5] = {
			Employee("Sami",120000,20),
			Employee("fahd",12000,45),
			Employee("taimoor",51000,33),
			Employee("AMAN",90000,20),
			Employee("ZOHD",40000,20),
			
		};
		for (int i=0,i<4;i++){
			cout<<s[i].disp();
		}
		
	
	}
	
	
