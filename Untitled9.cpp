#include <iostream>
using namespace std;
int main(){
	int number[20];
	int size=20;

	
	for(int i=0;i<size;i++){
		cout<<"Enter number at index"<<i<<endl;
		cin>>number[i];
	}
	int max=number[0];
	int min=number[0];
	for(int i=1;i<size;i++){
		if (number[i]>max){
			max=number[i];
		}
		if(number[i]<min)
		{
			min=number[i];
		}
	}
	cout<<"Max number is: "<<max<<" Min number is: "<<min;
}
