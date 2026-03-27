#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int strt, int end)
{
    int rndmIdx = strt + rand() % (end - strt + 1);
    swap(arr[strt], arr[rndmIdx]);

    int pivot = arr[strt];
    int count = 0;
    for (int i = strt + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pvtIdx = strt + count;
    swap(arr[pvtIdx], arr[strt]);

    int i = strt, j = end;
    while (i < pvtIdx && j > pvtIdx)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pvtIdx && j > pvtIdx)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pvtIdx;
}

void quickSort(int arr[], int strt, int end)
{
    if (strt >= end)
    {
        return;
    }

    int p = partition(arr, strt, end);

    quickSort(arr, strt, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    srand(time(0));

    cout << "Enter the number of elements : ";
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter Unsorted List : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted List : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
