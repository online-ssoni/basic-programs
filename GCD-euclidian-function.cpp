/*
Euclidian function method to calculate GCD
*/

#include<iostream>
using namespace std;

int computeGCD(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return computeGCD(b, a%b);
	}
}

int main()
{
	int a, b, gcd;
	cout<<"Enter two numbers to find the GCD: ";
	cin>>a>>b;
	gcd = computeGCD(a,b);
	cout<<"GCD = "<<gcd;
	return 0;
}
