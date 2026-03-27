#include <bits/stdc++.h>
using namespace std;
int main()
{

    char a;
    cin >> a;

    int n = int(a);
    if(n>=65 && n<=90)
    {
        n = n + 32;
        char p = char(n);
        cout << p;
    }
    else if(n>=97 && n<=122)
    {
        n = n - 32;
        char p = char(n);
        cout << p;
    }


    return 0;
}
