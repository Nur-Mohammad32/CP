#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int left_size = m - l + 1;
    int right_size = r - m;
    int L[left_size];
    int R[right_size];

    int k = 0;
    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }

    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }

    int i = 0;
    int j = 0;
    int curr = l;

    while (i < left_size && j < right_size)
    {
        if (L[i] <= R[j])
        {
            a[curr] = L[i];
            i++;
            curr++;
        }
        else
        {
            a[curr] = R[j];
            j++;
            curr++;
        }
    }

    while(i<left_size)
    {
        a[curr] = L[i];
        i++;
        curr++;
    }
    while(j<right_size)
    {
        a[curr] = R[j];
        j++;
        curr++;
    }
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge(a, 0, 3, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
