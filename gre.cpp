#include <iostream>
using namespace std;
int main(){
	int A[3][3],B[3][3],C[3][3];
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter element at row("<<i<<"),colomn("<<j<<") for Matrix A."<<endl;
			cin>>A[i][j];
		}
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter element at row("<<i<<"),colomn("<<j<<") for Matrix B."<<endl;
			cin>>B[i][j];
		}
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	cout<<"The additon of matrix A and B is "<<endl;
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
}
