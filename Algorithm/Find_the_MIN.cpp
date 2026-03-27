#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    while (q--)
    {
        int inc;
        cin >> inc;

        if (inc == 1)
        {
            long long x;
            cin >> x;
            pq.push(x);
        }
        else
        {
            if (pq.empty())
                cout << "empty\n";
            else
            {
                long long mn = pq.top();
                cout << mn << '\n';

                while (!pq.empty() && pq.top() == mn)
                    pq.pop();
            }
        }
    }

    return 0;
}
