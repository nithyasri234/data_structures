#include<iostream>
using namespace std;
void insertion_sort(int n,int a[])
{
    cout<<"The array before sorting using insertion sort is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        int key =a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"\n\nThe array after using insertion sort is:";
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
    insertion_sort(n,a);
    return 0;
}