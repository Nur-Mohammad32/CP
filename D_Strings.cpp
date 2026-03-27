#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s1;

    int l1 = s1.length();
    int l2 = s2.length();

    cout << l1 << " " << l2 << endl;
    cout << s1 << s2 << endl;
    s1[0] = s2[0];
    cout << s1 << " ";
    s2[0] = s3[0];
    cout << s2;

    return 0;
}
