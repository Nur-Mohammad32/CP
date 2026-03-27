#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int val = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= val; j++)
        {
            cout << j;
        }
        cout << endl;
        val++;
        space--;
    }

    return 0;
}
