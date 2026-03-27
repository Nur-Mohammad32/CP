#include <bits/stdc++.h>
using namespace std;

void printDigit(long long int n)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    printDigit(n / 10);
    cout << digit << " ";
}

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        if(n==0)
        {
            cout << 0;
        }
        printDigit(n);
        cout << endl;
    }

    return 0;
}
