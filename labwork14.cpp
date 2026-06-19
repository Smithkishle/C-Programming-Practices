#include <iostream>
using namespace std;
int main(){
	bool attendance;
	int i=0;
	do{
		cout<<"Enter attendance"<<endl;
		cin>>attendance;
		i++;
		
	}
	while(attendance);
	cout<<i-1<<"Present students";
}
