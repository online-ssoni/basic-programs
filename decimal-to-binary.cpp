/*
C++ Program to convert Decimal to Binary

We can convert any decimal number (base-10 (0 to 9)) into binary number (base-2 (0 or 1)) by C++ program.
Decimal	Binary
1	0
2	10
3	11
4	100
5	101
6	110
7	111
8	1000
9	1001
10	1010

Decimal to Binary Conversion Algorithm

Step 1: Divide the number by 2 through % (modulus operator) and store the remainder in array

Step 2: Divide the number by 2 through / (division operator)

Step 3: Repeat the step 2 until the number is greater than zero

*/

#include<iostream>
using namespace std;

int main()
{
    int n, c=0,arr[8];
    cout<<"Enter number to find the binary equivalent: ";
    cin>>n;

    //filling zeroes into the array
    for(int i=0; i<8; i++)
    {
        arr[i]=0;
    }
    for(int i=0; n>0; i++)  //repeat steps until number is greater than zero
    {
        arr[i]=n%2; //divide the number by 2 through % and store in array
        n=n/2;      //divide the number by 2 through /

    }

    cout<<"Binary of the given number= ";
    for(int i=7; i>=0; i--)
    {
        cout<<arr[i];
    }
    return 0;
}
















