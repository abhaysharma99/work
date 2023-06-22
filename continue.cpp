#include<iostream>
using namespace std;
int main()
{
    int pocketmoney;
    pocketmoney=3000;
    for(int date=1;date<=31;date++)
    {
        if(date%2==0){
            continue;
        }
        if(pocketmoney<300)
        {
            break;
        }
        cout<<"go out today neha\n";
        pocketmoney=pocketmoney-300;
    }
    return 0;
}