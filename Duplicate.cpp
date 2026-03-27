#include <bits/stdc++.h>
using namespace std;

bool duplicate(vector<int> &A)
{
    sort(A.begin(), A.end());

    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    bool ans = duplicate(A);

    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> A(n);
//     for (int i = 0; i< n; i++)
//     {
//         cin >> A[i];
//     }

//     sort(A.begin(), A.end());

//     bool flag = false;
//     for (int i = 0; i < n-1; i++)
//     {
//         if(A[i]==A[i+1])
//         {
//             flag = true;
//             break;
//         }

//     }

//     if(flag)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }
