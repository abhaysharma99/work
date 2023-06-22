#include<iostream>
using namespace std;
int main(){
    int n1,n2,num;
    char op;
    cout<<"enter 2 numbers"<<endl;
    cin>>n1>>n2;
    cout<<"enter operation"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1 + n2<<endl;
        break;
    case '-':
        cout<<n1 - n2<<endl;
        break;
    case '*':
        cout<<n1 * n2<<endl;
        break;
    case '/':
        cout<<n1 / n2<<endl;
        break;
    default:
        cout<<"invalid output"<<endl;
        break;
    }
    return 0;
}