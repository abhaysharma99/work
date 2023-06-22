#include<iostream>
using namespace std;
int main(){
    int i,j,rows,columns;
    cout<<"enter rows and colums"<<endl;
    cin>>rows>>columns;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(j==0||j==columns-1||i==0||i==rows-1)
            { cout<<"*";}
            else
            { cout<<" ";}
        }
        cout<<"\n";
    }
}