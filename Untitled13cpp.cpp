#include <iostream>
using namespace std;
int max_element(int a[],int size){
	int max=a[0];
	for(int i=1;i<size;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
main(){
	int arr[10];
	max_element(arr,10);
	for(int i=0;i<10;i++){
		cout<<"Enter element at index"<<i<<endl;
		cin>>arr[i];
	}
	cout<<max_element(arr,10);
}
