#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < N;i++)
    {
        int digit = s[i] - '0';
        //int digit = int(s[i]) - '0';
        sum += digit;
    }

    cout << sum;

    return 0;
}
