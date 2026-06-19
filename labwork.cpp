#include<iostream>
using namespace std;
int main(){
	string name;
	string roll_no;
	int age;
	int fee;
	int semester;
	float cgpa;
	cout<<"Enter your name:"<<endl;
	getline(cin,name);
	cout<<"Enter your Roll Number:"<<endl ;
	cin>>roll_no;
	cout<<"Enter your Age"<<endl;
	cin>>age;
	cout<<"Enter your Fee dues:"<<endl;
	cin>>fee;
	cout<<"Enter your Current Semester:"<<endl;
	cin>>semester;
	cout<<"Enter your CGPA:"<<endl;
	cin>>cgpa;
	cout<<name<<endl;
	cout<<roll_no<<endl;
	cout<<age<<endl;
	cout<<fee<<endl;
	cout<<semester<<endl;
	cout<<cgpa<<endl;
	return 0;
}
