#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> v;
    int count = 0;
    while(n!=0)
    {
        int digit = n % 10;
        v.push_back(digit);
        n /= 10;
        count++;
    }
    
    if(v[v.size()-1]%2==0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}
