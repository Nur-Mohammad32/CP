#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;

int partition(int arr[], int strt, int end)
{
    int rndIdx = strt + rand() % (end - strt + 1);
    swap(arr[strt], arr[rndIdx]);

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
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
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
        return;

    int p = partition(arr, strt, end);
    quickSort(arr, strt, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    srand(time(0));

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 1000000 + 1;
    }

    quickSort(arr, 1000, 10999);

    cout << "arr[13] = " << arr[13] << "\n";
    cout << "arr[20] = " << arr[20] << "\n";
    cout << "arr[333] = " << arr[333] << "\n";

    return 0;
}
