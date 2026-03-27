#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        string s1 = s;
        reverse(s1.begin(), s1.end());
        
        if(s == s1)
        {
            bool allSame = true;
            for(char c : s)
            {
                if(c != s[0])
                {
                    allSame = false;
                    break;
                }
            }
            if(allSame)
                cout << "NO";
            else
            {
                if(k > 0)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        else
        {
            if(s < s1)
                cout << "YES";
            else
            {
                if(k > 0)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        
        cout << "\n";
    }
    return 0;
}
