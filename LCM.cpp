/*
C++ program to find LCM


In above program, user is asked to integer two integers n1 and n2 and largest of those two numbers is stored in max.

It is checked whether max is divisible by n1 and n2, if it's divisible by both numbers, max (which contains LCM) is printed and loop is terminated.

If not, value of max is incremented by 1 and same process goes on until max is divisible by both n1 and n2.
*/

#include<iostream>
using namespace std;

int main()
{
	int n1, n2, max;
	cin>>n1>>n2;

	//Maximum value between n1 and n2 is stored in max
	max = (n1>n2)?n1:n2;

	do
	{
		if(max%n1==0 && max%n2==0)
		{
			cout<<"LCM= "<<max;
			break;
		}
		else
		{
			++max;
		}
	}while(true);
	return 0;
}