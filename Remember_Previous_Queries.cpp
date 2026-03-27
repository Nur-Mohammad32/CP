#include <iostream>
#include <list>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<int> l;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < l.size())
            {
                auto it = next(l.begin(), v);
                l.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        auto it = l.end();
        while (it != l.begin())
        {
            it--;
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
