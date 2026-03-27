#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char arr[n][4];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < 4; j++)
                cin >> arr[i][j];

        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
                if (arr[i][j] == '#')
                    st.push(j + 1);
        }

        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }

    return 0;
}
