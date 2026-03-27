#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }

        int countA = 0, countB = 0, countC = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == 'A')
                    countA++;
                else if (arr[i][j] == 'B')
                    countB++;
                else
                    countC++;
            }
        }

        if (countA < 3)
            cout << 'A' << endl;
        else if (countB < 3)
            cout << 'B' << endl;
        else
            cout << 'C' << endl;
    }

    return 0;
}
