/*
Finding Quotient and Remainder:

In this program, user is asked to enter two integers
(divisor and dividend) and computes the
quotient and remainder.
*/


#include<iostream>
using namespace std;

int main()
{
    int divisor, dividend, quotient, remainder;

    cout<<"Enter Dividend = ";
    cin>>dividend;
    cout<<"Enter Divisor = ";
    cin>>divisor;

    quotient = dividend/divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
