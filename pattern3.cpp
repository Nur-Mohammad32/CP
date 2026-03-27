#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 64 + i;
        char c = int(a);
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 64 + i;
        char c = (char)a;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }

    return 0;
}
