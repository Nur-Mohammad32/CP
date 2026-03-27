#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int lowest = INT_MAX;
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]<lowest)
        {
            lowest = arr[i];
            index = i;
        }   
    }

    cout << lowest << " " << index;


    return 0;
}
