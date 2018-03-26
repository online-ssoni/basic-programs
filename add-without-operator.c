#include<stdio.h>
int add(int x, int y){
	return printf("%*c%*c",x,'\r',y,'\r');
}
int main(int argc, char const *argv[]) {
	printf("Sum = %d\n", add(3,4));
	return 0;
}
