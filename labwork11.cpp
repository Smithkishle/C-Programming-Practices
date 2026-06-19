#include <iostream>
using namespace std;
int main(){
	bool attendance;
	int i;
	cout<<"Attendance"<<endl;
	cin>>attendance;
	while (attendance){
		cout<<"Enter attendance for next student";
		cin>>attendance;
		i++;
	}
	cout<<i<<"Students are present";
}
