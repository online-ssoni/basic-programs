#include<iostream>
using namespace std;

int main(){
	int count = 7;
	int arr[count] = {12,23,34,45,56,67,78};
	int first, last, middle, num=67;

	first = 0;
	last = count-1;
	middle = (first+last)/2;

	while (first<=last) {
		if(arr[middle] == num){
			cout<<"Found at "<<middle+1;
			break;
		}else if(arr[middle]< num){
			first = middle + 1;
		}else{
			last= middle-1;
		}
		middle = (first+last)/2;
	}
	if(first > last){
		cout<<"not found";
	}
	return 0;
}
