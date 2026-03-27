#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> final;
        for (char c : s)
        {
            if (!final.empty() && final.top() == c)
                final.pop();
            else
                final.push(c);
        }
        cout << final.size() << endl;
    }

    return 0;
}
