/*
C++ programs to count the number of digits in a number
*/

#include<iostream>
using namespace std;

void countDigit(int n)
{
    int c=0,r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        c=c+1;
    }

    cout<<c;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0)
    {
        countDigit(n);
    }
    else if(n<0)
    {
        n=n*(-1);
        countDigit(n);
    }
    else if(n==0)
    {
        cout<<"Zero";
    }
    return 0;
}
