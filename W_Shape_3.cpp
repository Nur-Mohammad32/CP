#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int star1 = 1;
    int space1 = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < space1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < star1; j++)
        {
            cout << "*";
        }
        star1 += 2;
        space1--;
        cout << endl;
    }

    int star2 = 2 * n - 1;
    int space2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < space2; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < star2; j++)
        {
            cout << "*";
        }
        star2 -= 2;
        space2++;
        cout << endl;
    }

    return 0;
}


