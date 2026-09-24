#include <iostream>
using namespace std;
int main(){
	char letter[20];
	int alph;
	int num;
	int special;
	for(int i=0;i<20;i++){
		cout<<"Enter letter at index"<<i<<endl;
		cin>>letter[i];
	}
	for(int i=0;i<20;i++){
		if(letter[i]>='A'&& letter[i]<='Z'||letter[i]>='a'&& letter[i]<='z'){
			alph++;
		}
		if(letter[i]>='0' && letter[i]<='9'){
			num++;
		}
		else {
			special++;
		}
		cout<<alph<<"Alphabets"<<num<<"Numbers"<<special<<"Special Characters";
	}
}
