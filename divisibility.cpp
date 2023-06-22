#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cin>>i;
    for(j=0;j<=100;j++)
    {
        if(j%i==0)
        {
            continue;
        }
        cout<<j;
        cout<<"\n";
    }
    return 0;
}