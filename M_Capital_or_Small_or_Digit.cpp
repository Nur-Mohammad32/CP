#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;

    int n = int(c);

    if(n>=48 && n<=57)
    {
        cout << "IS DIGIT" << endl;
    }

    if(n>=65 && n<=90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
    else if(n>=97 && n<=122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }

    return 0;
}
