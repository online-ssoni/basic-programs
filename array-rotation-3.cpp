#include<iostream>
using namespace std;

int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int d=2,temp;

	cout<<"Array before rotation:"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	for(int i=0; i<d/2; i++){
		temp = arr[i];
		arr[i] = arr[d-i-1];
		arr[d-i-1] = temp;
	}

	for(int i=d; i<(6/2)+d; i++){
		temp = arr[i];
		arr[i] = arr[6-i+d];
		arr[6-i+d] = temp;
	}

	for(int i=0; i<7/2; i++){
		temp = arr[i];
		arr[i] = arr[6-i];
		arr[6-i] = temp;
	}
	cout<<endl<<"Array after rotation:"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
