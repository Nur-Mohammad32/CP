#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int count1 = 0, count2 = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        count1++;
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        count2++;
    }

    cout << count1 << " " << count2 << endl;
    cout << s1 << " " << s2;

    return 0;
}
