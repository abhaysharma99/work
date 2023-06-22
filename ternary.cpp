#include<iostream>
using namespace std;
int main(){
    int i,a,b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    i=a>b?a:b;
    i=i>c?i:c;
    cout<<i<<endl;
    return 0;
}