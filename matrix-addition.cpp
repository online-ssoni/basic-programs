#include<iostream>
using namespace std;

int main(){
	int m,n;
	cout<<"Enter row and column(mxn) of matrix";
	cin>>m>>n;

	int A[m][n], B[m][n], SUM[m][n];
	cout<<"Enter elements in array A"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"A["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
		}
	}
	cout<<"Enter elements in array B"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"B["<<i<<"]["<<j<<"] = ";
			cin>>B[i][j];
		}
	}
	cout<<"Sum of two arrays is: "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			SUM[i][j] = A[i][j] + B[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"SUM = "<<SUM[i][j]<<endl;
		}
	}
}
