#include<iostream>
#include<unistd.h>
using namespace std;
int main(){

	for(int i=1; i<=10; i++){
		for(int j=1; j<=20; j++){
			usleep(30000);
			cout<<'-';
		}
		cout<<endl;
	}
	return 0;
}
