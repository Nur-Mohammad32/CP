#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    deque<pair<pair<int, int>, int>> guests;
    set<int> rooms;
    set<pair<int, int>> end_times;

    for (int i = 1; i <= n; i++)
    {
        int start, end;
        cin >> start >> end;
        guests.push_back({{start, end}, i});
        rooms.insert(i);
    }

    sort(guests.begin(), guests.end());

    vector<int> ans(n + 1);
    int cnt = 0;

    while (!guests.empty())
    {
        auto [time, idx] = guests.front();
        auto [start, end] = time;

        if (!end_times.empty() && end_times.begin()->first < start)
        {
            rooms.insert(end_times.begin()->second);
            end_times.erase(end_times.begin());
        }
        else
        {
            int room = *rooms.begin();
            rooms.erase(rooms.begin());
            ans[idx] = room;
            end_times.insert({end, room});
            guests.pop_front();
        }

        cnt = max(cnt, (int)end_times.size());
    }

    cout << cnt << '\n';
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << '\n';

    return 0;
}