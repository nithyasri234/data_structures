#include<iostream>
using namespace std;
void printArray(int size,int a[],int i){
    if(i==size)
    {
        return ;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printArray(n,a,0);
}