#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int flag = 0;
    string w;

    stringstream ss(S);
    while (ss >> w)
    {
        if (w == "Jessica")
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}