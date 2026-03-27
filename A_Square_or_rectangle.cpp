#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;

        if (n1 == n2)
        {
            cout << "Square" << endl;
        }
        if(n1!=n2)
        {
            cout << "Rectangle" << endl;
        }
    }

    return 0;
}
