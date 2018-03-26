/*
C++ Program to Print Alphabet Triangle

Output:
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
*/

#include <iostream>
using namespace std;
int main()
{
    char ch='A';

    for(int i=1; i<=10; i++) //to print 5 lines high triangle
    {
        for(int j=10; j>=i; j--) //to print spaces
        {
            cout<<" ";
        }

        for(int k=1; k<=i; k++)
        {
            cout<<ch++;
        }
        ch--;
        for(int m=1; m<i; m++)
        {
            cout<<--ch;
        }

        cout<<endl;
        ch='A';
    }
    return 0;
}
