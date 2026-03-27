#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        if (freq['A'] > freq['B'])
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}
