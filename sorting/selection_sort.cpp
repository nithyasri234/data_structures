#include<iostream>
using namespace std;
void selectio_sort(int n ,int a[]){
    cout<<"the array before sorting is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        int min= a[i];
        int ind = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]< min)
            {
                min=a[j];
                ind=j;
            }
        }
        int temp=a[ind];
        a[i]=a[ind];
        a[ind]=temp;
    }
    cout<<"\nAfter sorting the array :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectio_sort(n,a);
    return 0;
}