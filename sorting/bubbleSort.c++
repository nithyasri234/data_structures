#include<iostream>
using namespace std;
void bubble_sort(int n,int a[])
{
    cout<<"The array before sorting using bubble sort is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    cout<<"\n\nThe array after sorting using bubble sort is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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
    bubble_sort(n,a);
    return 0;
}