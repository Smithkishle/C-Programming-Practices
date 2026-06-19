#include <iostream>
using namespace std;
int main(){
	int meal,size,rate,numplates,basebill,finalbill;
	double discount,tax;
	cout<<"Select your meal type \n1 for Fast Food \n2 for Traditional Food \n3 for BBQ"<<endl;
	cin>>meal;
	cout<<"select serving size:\n1 for regular\n2 for large"<<endl;
	cin>>size;
	cout<<"select number of plates"<<endl;
	cin>>numplates;
	switch(meal){
		case 1:
			switch(size)
			{
				case 1:
					rate=250;
					break;
				case 2:
				    rate=350;
					break;	
					
			}
		case 2:
			switch(size)
			{
				case 1:
					rate=400;
					break;
				case 2:
				    rate=550;
					break;	
					
			}
		case 3:
			switch(size)
			{
				case 1:
					rate=700;
					break;
				case 2:
				    rate=950;
					break;	
					
			}		
	}
	basebill=rate*numplates;
	if(numplates>5){
		discount=basebill*0.10;
	}
	finalbill=basebill-discount;
	if (finalbill>4000){
		tax=finalbill*0.05;
		finalbill=finalbill-tax;
	}
	cout<<"Your final bill is "<<finalbill<<"with discount"<<discount<<"with tax"<<tax;
}
