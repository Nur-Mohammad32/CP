#include <bits/stdc++.h>
using namespace std;

void print_digits(long long n)
{
    if (n == 0)
        return;

    print_digits(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 0)
            cout << 0;
        else
            print_digits(n);
        cout << endl;
    }

    return 0;
}
