//Example of how getchar() function works

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int c, i=0;
	char str[100];

	cout<<"Enter character, press enter to stop.\n";

	do
	{
		c=getchar();
		str[i]=c;
		i++;
	}while(c!='\n');

	cout<<str;
	return 0;
}