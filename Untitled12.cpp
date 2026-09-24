#include<iostream>
#include<string>
using namespace std;
int main(){
	char arr[100];
	int vovel,cons;
	cout<<"Enter the line"<<endl;
	cin.getline(arr,100);
	for(int i=0;arr[i]!='\0';i++){
		if(arr[i]=='a'||arr[i]=='A'||arr[i]=='E'||arr[i]=='e'||arr[i]=='o'||arr[i]=='O'||arr[i]=='I'||arr[i]=='i'arr[i]=='U'||arr[i]=='U'){
			vovel++
		}
		else
		{
			cons++
		}
		
	}
	cout<<vovel<<cons;
}
