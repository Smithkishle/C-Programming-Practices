#include<iostream>
using namespace std;
int main(){
string name;
int age=0;
int salary=0;
string department;
cout<<"Enter your name:"<<endl;
getline(cin,name);
cout<<"Enter your age:"<<endl;
cin>>age;
cout<<"Enter your Salary:"<<endl;
cin>>salary;
cout<<"Enter your Department:"<<endl;
getline(cin,department);
cout<<"Your name is:"<<name<<endl;
cout<<"Your age is:"<<age<<endl;
cout<<"Your salary is:"<<salary<<endl;
cout<<"Your department is:"<<department<<endl;
cout<<"Your new salary due to inflation is"<<5000+salary;
return 0;







}
