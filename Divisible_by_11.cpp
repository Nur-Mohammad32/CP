#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 0;
    int a = n;
    while(n!=0)
    {
        int digit = n % 10;
        count++;
        n = n / 10;
    }

    int odd_sum = 0;
    int even_sum = 0;

    n = a;
    while (n != 0)
    {
        if (count % 2 != 0)
        {
            int digit1 = n % 10;
            odd_sum += digit1;
            n = n / 10;

            int digit2 = n % 10;
            even_sum += digit2;
            n = n / 10;
        }
        else
        {
            int digit1 = n % 10;
            even_sum += digit1;
            n = n / 10;

            int digit2 = n % 10;
            odd_sum += digit2;
            n = n / 10;
        }
    }

    int diff = abs(even_sum - odd_sum);
    // cout<<diff;

    if (diff % 11 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
