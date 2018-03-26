/*
C++ Program to generate Fibonacci Triangle

Output:
Enter the limit: 10
  1
  1       1
  1       1       2
  1       1       2       3
  1       1       2       3       5
  1       1       2       3       5       8
  1       1       2       3       5       8       13
  1       1       2       3       5       8       13      21
  1       1       2       3       5       8       13      21      34
  1       1       2       3       5       8       13      21      34      55
*/

#include<iostream>
using namespace std;

int main()
{
    int a=0, b=1, i,c,limit,j;
    cout<<"Enter the limit: ";
    cin>>limit;

    for(i=1;i<=limit; i++)
    {
        a=0;
        b=1;
        cout<<b<<" ";

        for(j=1; j<i; j++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
        cout<<endl;
    }

    return 0;
}
