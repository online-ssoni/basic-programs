/*
Palindrome program in C++

A palindrome number is a number that is same after reverse.
For example 121, 34543, 343, 131, 48984 are the palindrome numbers.

Palindrome number algorithm

Get the number from user
Hold the number in temporary variable
Reverse the number
Compare the temporary number with reversed number
If both numbers are same, print palindrome number
Else print not palindrome number
*/

#include<iostream>
using namespace std;

void checkPalindrome(int n)
{
    int temp,r,sum=0;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"Number is palindrome";
    }
    else
    {
        cout<<"Number is not palindrome";
    }
}

int main()
{
    int num;
    cout<<"Enter a number to check palindrome: ";
    cin>>num;
    checkPalindrome(num);
    return 0;
}
