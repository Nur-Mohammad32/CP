#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int p;
    int time_left = 240 - k;
    if(time_left==0||time_left<5)
    {
        cout << "0";
        return 0;
    }
    
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        
        sum += i * 5;
        if (sum > time_left)
        {
            break;
        }
        p = i;
    }
    cout << p;
    return 0;
}
