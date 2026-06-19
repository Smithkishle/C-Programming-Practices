#include<iostream>
using namespace std;
main()
{
//	int arr[10];
//	int max_prod=0;
//	int ele1, ele2;
//	for(int i=0;i<10;i++)
//	{
//		cout<<"Enter Element at index: "<<i<<" = ";
//		cin>>arr[i];
//	}
//	
//	for(int i=0; i<10; i++)
//	{
//		for(int j=i+1; j<10; j++)
//		{
//			if(arr[i]*arr[j]>max_prod)
//			{
//				max_prod=arr[i]*arr[j];
//				ele1=i;
//				ele2=j;
//			}
//		}
//	}
//	
//	cout<<"The MAximum Product PAIR is: "<<"("<<arr[ele1]<<","<<arr[ele2]<<")";
	int arr[10];
//	int max_prod=0;
//	int ele1, ele2;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Element at index: "<<i<<" = ";
		cin>>arr[i];
	}
	for (int i=0;i<=9;i++)
	{
		int count=1;
		for(int j=i+1;j<=9;j++){
			if(arr[i]==arr[j])
			{
				count=count+1;
			}
			
		}
		cout<<"the nim is"<<arr[i]<<"repeat"<<count<<endl;
	}
	

}

/*
main()
{
	int arr[10];
	int sum=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Element at index: "<<i<<" = ";
		cin>>arr[i];
	}
	
	for(int j=0; j<10;j++)
	{
		if(arr[j]%2==0)
		{
			sum=sum+arr[j];
		}
	}
	cout<<"The sum of Even Elements is: "<<sum<<endl;
	
	
	
}
*/
