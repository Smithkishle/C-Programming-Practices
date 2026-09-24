#include <iostream>
using namespace std;
class Student {
	public:
	int roll;
	string name;
	float marks;
	
	display(){
		cout<<roll;
	}
};
int main(){
	Student s;
	cout<<"Put value for roll"<<endl;
	cin>>s.roll;
	cout<<"put value for marks"<<endl;
	cin>>s.marks;
	cout<<"Put value for name"<<endl;
	cin>>s.name;
	s.display();

}
