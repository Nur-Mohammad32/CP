#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int y, w, z;
    cin >> y >> w;
    if (y > w)
    {
        z = y;
    }
    else
    {
        z = w;
    }

    int count = 0;
    for (int i = z; i <= 6; i++)
    {
        count++;
    }

    int p = gcd(count, 6);

    int m = count / p;
    int n = 6 / p;

    cout << m << "/" << n;

    return 0;
}
