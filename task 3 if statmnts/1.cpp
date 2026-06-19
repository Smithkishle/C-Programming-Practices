#include <iostream>
using namespace std;
int main(){
	int engmarks,mathmarks,scimarks,total=0;
	float percent=0;
	cout<<"Enter marks of english, math and science"<<endl;
	cin>>engmarks>>mathmarks>>scimarks;
	total=engmarks+mathmarks+scimarks;
	percent=(total/300)*100;
	if(percent>=50.0){
		cout<<"Student passed with percentage:"<<percent;
	}
}
