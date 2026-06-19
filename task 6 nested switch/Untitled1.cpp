#include <iostream>
using namespace std;
int main(){
	int connection,meter;
	double units,rate,basebill,surcharge,tax,finalbill;
	cout<<"Select your connection type:\n1 for residential \n2 for commercial \n3 for industrial"<<endl;
	cin>>connection;
	cout<<"select fout meter type \n1 for Digital \n2 for Analog"<<endl;
	cin>>meter;
	cout<<"Enter your consumed units"<<endl;
	cin>>units;
	switch (connection)
	{
		case 1:
		switch(meter){
			case 1:
				rate=9;
				break;
			case 2:
			    rate=7;
		}
		case 2:
		switch(meter){
			case 1:
				rate=16;
				break;
			case 2:
			    rate=13;
				}
		case 3:
		switch(meter){
			case 1:
				rate=22;
				break;
			case 2:
			    rate=18;
		}		
		
	}
	basebill=units*rate;
	if (units>900){
		surcharge=basebill*0.07;
	}
	if (basebill>9000){
		tax=basebill*0.06;
	}
	cout<<"Your base bill is"<<basebill<<"with surcharge"<<surcharge<<"and with service tax"<<tax<<endl;
	cout<<"Yout total bill is"<<basebill-surcharge-tax;

}
