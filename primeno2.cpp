#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"enter lower limit"<<endl;
    cin>>a;
    cout<<"enter upper limit"<<endl;
    cin>>b;
    for(i=a;i<=b;i++){
        for( j=2;j<i;j++)
        {
            if(i%j==0){
               break;
            }
        }
        if(i==j){
        cout<<i<<endl;
        }

    }
    return 0;
}