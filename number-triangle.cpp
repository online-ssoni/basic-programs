/*
C++ program to print number triangle

Output:
Enter the Range=6
      1
     121
    2321
   1234321
  123454321
 12345654321
*/


#include<iostream>
using namespace std;

int main()
{
    int range, n=1;
    cout<<"Enter the Range= ";
    cin>>range;

    for(int i=1; i<=range; i++)
    {
        for(int j=range; j>i; j--)
        {
            cout<<" ";
        }
        for(int k=1; k<=i;k++)
        {
            cout<<n++;
        }
        n--;
        for(int m=1; m<i;m++)
        {
            cout<<--n;
        }
        cout<<endl;
        n=1;
    }
    return 0;
}
