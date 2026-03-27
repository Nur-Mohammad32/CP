#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> cnt;
        string s1;
        int count = 0;

        while (ss >> word)
        {
            int c = ++cnt[word];
            if (c > count)
            {
                count = c;
                s1 = word;
            }
        }

        cout << s1 << " " << count << endl;
    }
    return 0;
}
