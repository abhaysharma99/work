#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==1)
    cout<<"number is prime";
    else
    cout<<"not a prime";
    return 0;
}