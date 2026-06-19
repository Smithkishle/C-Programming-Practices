#include <iostream>
using namespace std;
int main(){
	int arr[10];
	int start=0,end=9,key,mid,result=0;
	for(int i=0;i<10;i++){
		cout<<"Enter element at index:"<<i<<endl;
		cin>>arr[i];
	}
	cout<<"Enter the key to search:"<<endl;
	cin>>key;
	mid=(start+end)/2;
	while(start<=end){
		if(arr[i]==key){
			result=mid;
			break;
		}
		else if(arr[i]>key){
			start= mid+1;
		}
		else {
			end=mid-1;
		}
		
	}
	
}
