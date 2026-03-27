#include <bits/stdc++.h>
using namespace std;

int digit(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int calc(int n, int k)
{
    while (k != 0)
    {
        if(digit(n)>=2 && (n%10==0))
        {
            n = n / 10;
            k--;
        }
        else if(digit(n)>=2 && (n%10!=0))
        {
            n--;
            k--;
        }
        else
        {
            n--;
            k--;
        }
    }
    return n;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = calc(n, k);
    cout << ans;

    return 0;
}
