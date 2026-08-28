#include<iostream>
using namespace std;
void printIncreasing(int current ,int n)
{
    if(current == n+1)
    {
        return ;
    }
    cout<<current <<" ";
    printIncreasing(current+1,n);
}
int main()
{
    int n;
    cin>>n;
    int current=1;
    printIncreasing(current,n);
}