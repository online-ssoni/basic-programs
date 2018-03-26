/*
Prime Number Program in C++

Prime number is a number that is greater than 1 and
divided by 1 or itself. In other words, prime numbers
can't be divided by other numbers than itself or 1.
For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the
prime numbers.
*/

#include<iostream>
using namespace std;

int main()
{
    int num,i,flag=0;
    cout<<"Enter the number to check prime or not: ";
    cin>>num;
    for(i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
    return 0;
}
