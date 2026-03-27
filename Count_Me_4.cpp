#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int l = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        l++;
    }

    int freq[26] = {0};

    for (int i = 0; i < l; i++)
    {
        int val = s[i];
        freq[val - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            int j = 97;
            cout << char(i + 97) << " - " << freq[i] << endl;
        }
    }

    return 0;
}
