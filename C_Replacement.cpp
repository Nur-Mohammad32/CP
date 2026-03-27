#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N;i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N;i++)
    {
        if(A[i]>0)
        {
            A[i] = 1;
        }
        else if(A[i]<0)
        {
            A[i] = 2;
        }
        else
        {
            A[i] = 0;
        }
    }

    for(int x:A)
    {
        cout << x << " ";
    }

        return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>0)
//         {
//             arr[i] = 1;
//         }
//         else if(arr[i]<0)
//         {
//             arr[i] = 2;
//         }
//         else
//         {
//             arr[i] = 0;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
