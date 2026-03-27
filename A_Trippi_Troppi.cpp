#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<char> v;

        string word;
        while (ss >> word)
        {
            v.push_back(word.front());
        }

        for (char c : v)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
