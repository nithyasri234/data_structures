#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The diagonal elements are :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i][i]<<" ";
    }
    return 0;
}