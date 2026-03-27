#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        int count = 0;
        for (int j = 0; s[j] != '\0'; j++)
        {
            count++;
        }
        if (count <= 10)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << count - 2 << s[count - 1] << endl;
        }
    }

    return 0;
}
