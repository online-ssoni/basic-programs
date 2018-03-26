/*
Sum of digits program in C++

We can write the sum of digits program in C++ language by the help of loop and mathematical operation only.

Sum of digits algorithm

To get sum of each digit by C++ program, use the following algorithm:

Step 1: Get number by user
Step 2: Get the modulus/remainder of the number
Step 3: sum the remainder of the number
Step 4: Divide the number by 10
Step 5: Repeat the step 2 while number is greater than 0.
*/

#include<iostream>
using namespace std;

int main()
{
    int n,r,sum=0;
    cout<<"Enter a number to find the sum of its digits: ";
    cin>>n;

    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }

    cout<<"Sum of digits = "<<sum;
    return 0;
}
