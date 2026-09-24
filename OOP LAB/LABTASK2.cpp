#include <iostream>
using namespace std;
class Book{
    public:
	    string title;
	    string author;
	    float price;
	    void input(){
	        cout<<"Enter title"<<endl;
	        cin>>title;
	        cout<<"Enter author"<<endl;
	        cin>>author;
	        cout<<"Enter Price"<<endl;
	        cin>>price;
	    }
	    void diplay (){
	        cout<<title<<endl;
	        cout<<author<<endl;
	        cout<<price<<endl;
	    }

};
int main(){
    Book b;
    b.input();
    b.diplay();
    return 0;

}
