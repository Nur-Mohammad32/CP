#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    getchar();

    string str1[T];

    for (int i = 0; i < T; i++)
    {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);

        int l1 = S.length();
        int l2 = X.length();

        string str = "";
        for (int j = 0; j < l1;)
        {
            bool flag = true;

            if (j + l2 <= l1)
            {
                for (int k = 0; k < l2; k++)
                {
                    if (S[j + k] != X[k])
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag == true)
                {
                    str += "#";
                    j += l2;
                    continue;
                }
            }

            str += S[j];
            j++;
        }

        str1[i] = str;
    }

    for (int i = 0; i < T; i++)
    {
        cout << str1[i] << endl;
    }

    return 0;
}
