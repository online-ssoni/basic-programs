#include<iostream>
#include<unistd.h>
using namespace std;
int main(){

	for(int i=1; i<=100; i++){

		for(int j=1; j<=10; j++)
		{
			usleep(900000);
			cout<<"\33[2K \r"<<i<<" * "<<j<<" = "<<i*j;
		}
	}
	return 0;
}
