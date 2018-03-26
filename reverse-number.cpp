/*
C++ program to reverse a number
*/

#include<iostream>
using namespace std;

int main()
{
    int num, rev=0, r;
    cout<<"Enter a number to reverse: ";
    cin>>num;

    while(num!=0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num = num/10;
    }

    cout<<"Reversed number = "<<rev;
    return 0;
}
