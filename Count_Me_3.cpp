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

        int l = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            l++;
        }

        int capital = 0, small = 0, digit = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                capital++;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                small++;
            }
            if (s[i] >= 48 && s[i] <= 57)
            {
                digit++;
            }
        }
        cout << capital << " " << small << " " << digit << endl;
    }
    return 0;
}
