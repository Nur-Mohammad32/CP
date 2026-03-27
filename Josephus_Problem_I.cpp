#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    int n;
    cin >> n;
    ordered_set s;
    for (int i = 1; i <= n; i++)
        s.insert(i);
    int idx = 1 % n;
    while (n--)
    {
        auto it = s.find_by_order(idx);
        cout << *it << " ";
        s.erase(it);
        if (n)
            idx = (idx + 1) % n;
    }
    return 0;
}