#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        // for (int k = n - 1; k >= i; k--)
        // {
        //     cout << " ";
        // }

        for (int k = 1; k <= space;k++)
        {
            cout << " ";
        }

            for (int j = 1; j <= star; j++)
            {
                cout << "*";
            }
        cout << endl;
        star += 2;
        space--;
    }

    return 0;
}
