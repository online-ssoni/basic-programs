/*
C++ Program to calculate factorial using loop
*/

#include<iostream>
using namespace std;

void printFactorial(int n)
{
    int i, result=1;
    for(i=1; i<=n; i++)
    {
        result = result*i;
    }
    cout<<"Factorial of "<<n<<" is = "<<result;
}

int main()
{
    int num;
    cout<<"Enter a number to calculate factorial = ";
    cin>>num;

    printFactorial(num);

    return 0;
}
