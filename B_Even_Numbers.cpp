#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    bool flag = false;

    for (int i = 2; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            cout << i << endl;
            flag = true;
        }
    }

    if(flag==false)
    {
        cout << "-1";
    }

    return 0;
}
