/*
C++ Program to swap two numbers without third variable

We can swap two numbers without using third variable. There are two common ways to swap two numbers without using third variable:

By + and -
By * and /

Program 2: Using + and -
*/

#include<iostream>
using namespace std;

void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swap, a= "<<a<<endl;
    cout<<"After swap, b= "<<b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swap, a= "<<a<<endl;
    cout<<"Before swap, b= "<<b<<endl;
    swap(a,b);

    return 0;
}

