#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int l = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        l++;
    }

    int countVowel = 0;
    for (int i = 0; i < l; i++)
    {
        int val = int(S[i]);

        if (val == 97 || val == 101 || val == 105 || val == 111 || val == 117)
        {
            countVowel++;
        }
    }

    int ans = l - countVowel;
    cout << ans;

    return 0;
}
