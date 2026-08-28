#include<iostream>
using namespace std;
void printRecursive(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    printRecursive(n-1);
}
int main()
{
    int n;
    cin>>n;
    printRecursive(n);
}