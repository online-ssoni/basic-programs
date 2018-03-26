#include<iostream>
using namespace std;

int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int temp;

	cout<<"Array before rotation"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	for(int i=0; i<7/2; i++){
		temp = arr[i];
		arr[i] = arr[6-i];
		arr[6-i] = temp;
	}



	cout<<endl<<"Array after rotation"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}
	//reversing Array
	return 0;
}
