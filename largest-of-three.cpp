/*
C++ program to print largest of 3 numbers
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is greater";
    }
    if(b>a && b>c)
    {
        cout<<b<<" is greater";
    }
    if(c>a && c>b)
    {
        cout<<c<<" is greater";
    }
    return 0;
}
