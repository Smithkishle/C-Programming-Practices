#include <iostream>
using namespace std;
class num{
	public:
	int num;
	void increment(){
		num++;
	}
	void decrement(){
		num--;
	}
};
int main(){
	num n;
	cin>>n.num;
	increment(); 
	cout<<n.num;
}
