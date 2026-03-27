#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int fp = -1, lp = -1;

        fp = s.find('B');
        lp = s.rfind('B');

        cout << lp - fp + 1 << endl;
    }

    return 0;
}
