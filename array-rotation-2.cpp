#include<iostream>
using namespace std;
int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int d=2,temp;

	cout<<"Array before rotation:"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}


	for(int i=0; i<d; i++){
		temp = arr[0];
		for(int j=0; i<7; j++){
			if(j==7-1){
				arr[j] = temp;
				break;
			}else{
				arr[j] = arr[j+1];
			}
		}
	}

	cout<<endl<<"Array after rotation:"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
