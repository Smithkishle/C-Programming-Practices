#include <iostream>
using namespace std;
class student{
	private:
		int roll;
		string name;
		double marks;
	public:
	void setter(int r,string n,double m){
		roll=r;
		name=n;
		marks=m;
	}
	int getRoll(){
		return roll;
	}
	string getname(){
		return name;
	}
	double getmarks(){
		return marks;
	}
	void disp(){
		cout<<roll;
		cout<<name;
		cout<<marks;
	}	
};
int main(){
	student s1;
	s1.setter(213,"Sami",999);
	s1.getRoll();
	cout<<endl;
	s1.disp();
	int rollno=s1.getRoll();
	string naam=s1.getname();
	double marks=s1.getmarks();
	
	cout<<rollno<<endl;
	cout<<naam<<endl;
	cout<<marks;
	
}
