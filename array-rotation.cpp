#include<iostream>
using namespace std;

int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int d = 2;
	int temp[d];

	cout<<"Array before rotation:"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	//copy elements into temp Array
	for(int i=0; i<d; i++){
		temp[i] = arr[i];
	}

	//shift elements d position further
	for(int i=d; i<7; i++){
		arr[i-d] = arr[i];
	}

	//copy elements in the last
	for(int i=0; i<d; i++){
		arr[7-d+i] = temp[i];
	}

	cout<<endl<<"Array after rotation:"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
