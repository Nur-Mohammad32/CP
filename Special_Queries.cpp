#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> Q;

    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string s;
            cin >> s;
            Q.push(s);
        }
        else if (c == 1)
        {
            if (!Q.empty())
            {
                cout << Q.front() << endl;
                Q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
