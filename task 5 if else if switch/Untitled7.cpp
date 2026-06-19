#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	int op;
	cout<<"enter numner 1 and 2"<<endl;
	cin>>num1>>num2;
	cout<<"select form following"<<endl;
	cout<<"1 for addition"<<endl;
	cout<<"2 for subtraction"<<endl;
	cout<<"3 for multiple"<<endl;
	cout<<"4 for divide"<<endl;
	switch(op){
		case 1:
		cout<<num1+num2;
		break;
		case 2:
		cout<<num1-num2;
		break;
		case 3:
		cout<<num1*num2;
		break;
		case 4:
		cout<<num1/num2;
		break;	
		
	}
	
}
