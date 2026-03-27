#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int left_size = mid - l + 1;
    int right_size = r - mid;

    int L[left_size];
    int R[right_size];

    int k = 0;
    for (int i = l; i <= mid; i++)
    {
        L[k] = a[i];
        k++;
    }

    k = 0;
    for (int i = mid + 1; i <= r; i++)
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

    while (i < left_size)
    {
        a[curr] = L[i];
        i++;
        curr++;
    }

    while (j < right_size)
    {
        a[curr] = R[j];
        j++;
        curr++;
    }
}

void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, 0, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    cout << "Enter the number of elements : ";
    int n;
    cin >> n;
    int a[n];

    cout << "Enter Unsorted List : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);

    cout << "Sorted List : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
