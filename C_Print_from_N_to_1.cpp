#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i == 0)
    {
        return;
    }

    if (i == 1)
    {
        cout << i;
    }
    else
    {
        cout << i << " ";
        print(i - 1, n);
    }
}

int main()
{
    int n;
    cin >> n;

    int i = n;
    print(i, n);
    return 0;
}
