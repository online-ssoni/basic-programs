#include<iostream>
using namespace std;

int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int temp,c;

	cout<<"Array before rotation"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	temp = arr[6];

	for(int i=6; i>=0; i--){
		arr[i] = arr[i-1];
	}

	arr[0] = temp;


	cout<<endl<<"Array after rotation"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
