#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int num = 1;
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < star; j++)
        {
            cout << num+j << " ";
        }
        star++;
        space--;
        cout << endl;
    }

    return 0;
}
