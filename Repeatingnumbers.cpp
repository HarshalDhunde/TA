#include<bits/stdc++.h>
using namespace std;
void printPatt(int n)
{
    int colCount = 1;
    int value = 1;
    //write your code here
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=colCount; j++)
        {
            if(value == 10)
                value = 1; // Restart at 10

            cout<<value;

            value++;
        }

        cout<<endl;

        // Increase the total number of columns by 2
        colCount *= 2;
    }

}
