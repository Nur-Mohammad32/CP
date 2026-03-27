#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int strt, int end)
{
    int pivot = a[strt];

    int count = 0;

    for (int i = strt + 1; i <= end; i++)
    {
        if (a[i] <= pivot)
        {
            count++;
        }
    }

    int pvtIdx = strt + count;
    swap(a[pvtIdx], a[strt]);

    int i = strt, j = end;
    while (i < pvtIdx && j > pvtIdx)
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }

        if (i < pvtIdx && j > pvtIdx)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return pvtIdx;
}

void QuickSort(int a[], int strt, int end)
{
    // base case

    if (strt >= end)
    {
        return;
    }

    // partition

    int p = partition(a, strt, end);

    // sorting for strt part
    QuickSort(a, strt, p - 1);

    // sorting for end part
    QuickSort(a, p + 1, end);
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

    QuickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
