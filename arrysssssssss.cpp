#include<iostream>
using namespace std;
main()
{
	bool found=false;
	int found_index;
	int size;
	cout<<"Enter Required size of array: "<<endl;
	cin>>size;
	int marks[size];
	int marks2[size];
	int max_index, min_index;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter Marks at index "<<i<<" ";
		cin>>marks[i];
	}
	
	int key;
	cout<<"Enter Your Key value to search: "<<endl;
	cin>>key;
	for(int i=0; i<size; i++)
	{
		if(key==marks[i])
		{
			found_index=i;
			found=true;
			
			break;
		}
		
	}
	if(found==true)
	{
		cout<<"Element Found at Index: "<<found_index<<endl;
	}
	else
	{
		cout<<"Element Not Found: "<<endl;
	}
	
	
	
	
	/*
	// To IDentify Min and MAx element in an array
	int max=0;
	int min=marks[0];
	
	for(int i=0; i<size;i++)
	{
		if(marks[i]>max)
		{
			max_index=i;
			max=marks[i];
		}
		
		if(marks[i]<min)
		{
			min_index=i;
			min=marks[i];
		}
	}
	cout<<"The maximum marks in the array is:  "<<max<<"Exists at index:  "<<max_index<<endl;
	cout<<"The minimum marks in the array is:  "<<min<<"Exists at index:  "<<min_index<<endl;
	
	
	*/
	

	// Array Assignment
/*	for(int i=0; i<size; i++)
	{
		marks2[i]=marks[i];
	}
	
*/
	
/*	
//to display and array output

for(int i=0; i<size; i++)
	{
		cout<<"The marks at index "<<i<<" is "<<marks2[i]<<endl;
	}
	*/
}
