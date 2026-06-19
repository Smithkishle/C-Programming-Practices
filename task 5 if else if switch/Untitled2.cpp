#include <iostream>
using namespace std;
int main(){
	
	int marks;
	cout<<"Enter the marks"<<endl;
	cin>>marks;
	if (marks>=85){
		cout<<"Your grade is A. Excellent ";
	}
	else if (marks>=70 && marks<85){
		cout<<"Your grade is B. Very Good";
	}
    else if(marks>=60 && marks<70)
	{
		cout<<"Your grade is C.";
	}
	else if(marks>=50 && marks<60)
	{
		cout<<"Your grade is D. Pass";
	}
	
    else {
	cout<<"Fail";
}
}

