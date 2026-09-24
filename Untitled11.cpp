#include <iostream>
#include<string>
using namespace std;
int main(){
	char pass[100];
	int alph=0;
	int num=0;
	int special=0;
	cout<<"Enter the password"<<endl;
	cin.getline(pass,100);
	for(int i=0;pass[i]!='\0';i++){
		if(pass[i]>='A'&& pass[i]<='Z'||pass[i]>='a'&& pass[i]<='z'){
			alph++;
		}
		if(pass[i]>='0' && pass[i]<='9'){
			num++;
		}
		else {
			special++;
		}
		cout<<alph<<"Alphabets"<<endl;
		cout<<num<<"Numbers"<<endl;
		cout<<special<<"Special Characters";
	}
}
