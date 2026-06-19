#include <iostream>
using namespace std;
int main(){
	float engmarks=0,mathmarks=0,scimarks=0,total=0,percent=0;
	cout<<"Enter your Eng,Math,and Sci marks:"<<endl;
	cin>>engmarks>>mathmarks>>scimarks;
	total=engmarks+mathmarks+scimarks;
	percent=(total/300*100);
	if(percent>=50){
		cout<<"Student Passed";
	}
	
	
}
