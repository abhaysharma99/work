#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter language"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hola"<<endl;        
        break;
    case 'b':
        cout<<"namastey"<<endl;
        break;
    case 'c':
        cout<<"hello"<<endl;
        break;
    case 'd':
        cout<<"ciao"<<endl;
        break;
    case 'e':
        cout<<"arigato"<<endl;
        break;
    default:
        cout<<"invalid input"<<endl;
        break;
    }
    return 0; 
}