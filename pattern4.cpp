#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    for (i = 1; i <= 5; i++)
    {
        for (n = 1; n <= 5 - i; n++)
        {
            cout << " ";
        }
        for (j = 1; j <= 5; j++)
            cout << " *";

        cout << endl;
    }
}