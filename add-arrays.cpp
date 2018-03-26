#include<iostream>
using namespace std;

int main(){
	int a[20], b[20], c[20];
	//filling up arrays
	for(int i=0; i<20; i++){
		a[i] = i*78;
		b[i] = i*28+9;
	}

	//adding two arrays
	for(int i=0; i<20; i++){
		c[i] = a[i]+b[i];
	}

	//printing arrays
	for(int i=0; i<20;i++){
		cout<<c[i]<<"---";
	}
	return 0;
}
