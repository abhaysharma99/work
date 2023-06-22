#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    for(i=1;i<=5;i++){
        for(n=i;n<5;n++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<j;
        }
        cout<<endl;
    }
}