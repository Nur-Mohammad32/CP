#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int min = INT_MAX;
    int max = INT_MIN;

    int min_index, max_index;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    //cout << min << " " << max;

    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for (int i = 0; i < N;i++)
    {
        cout << arr[i] << " ";
    }

        return 0;
}
