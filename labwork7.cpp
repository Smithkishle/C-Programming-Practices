#include <iostream>
using namespace std;
int main(){
	char letter;
	cout<<"Enter the charactar:"<<endl;
	cin>>letter;
	switch(letter)
	{
	
    case 'a':
	case 'e':
	case 'i':
	case 'u':
	case 'o':
		cout<<"this letter is vowel."<<endl;
		break;
		
	default:
		cout<<"this letter is consonent.";
	}
			
}
