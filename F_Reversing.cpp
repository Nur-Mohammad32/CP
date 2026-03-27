#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int i = 0;
    int j = A.size() - 1;

    while (i < j)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }

    for (int x : A)
    {
        cout << x << " ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//     }

//     int i = 0;
//     int j = N - 1;
//     while(i<j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }

//     for (int i = 0; i < N; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
