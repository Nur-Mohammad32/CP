#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> bh;
    string url;

    while (cin >> url && url != "end")
    {
        bh.push_back(url);
    }

    int q;
    cin >> q;
    cin.ignore();

    auto it = bh.begin();

    while (q--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string c;
        ss >> c;

        if (c == "visit")
        {
            string addr;
            ss >> addr;
            bool found = false;
            for (auto i = bh.begin(); i != bh.end(); i++)
            {
                if (*i == addr)
                {
                    it = i;
                    cout << *it << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "next")
        {
            auto temp = it;
            temp++;
            if (temp != bh.end())
            {
                it = temp;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "prev")
        {
            if (it != bh.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
