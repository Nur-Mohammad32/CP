#include <bits/stdc++.h>
using namespace std;

void print1(int arr[], int i)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}

void print2(int arr[], int i)
{
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[3];
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    print1(arr, 3);
    cout << endl;
    print2(arr2, 3);

    return 0;
}
