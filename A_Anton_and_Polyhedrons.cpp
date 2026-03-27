#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<string, int> p1 = {"Tetrahedron", 4};
    pair<string, int> p2 = {"Cube", 6};
    pair<string, int> p3 = {"Octahedron", 8};
    pair<string, int> p4 = {"Dodecahedron", 12};
    pair<string, int> p5 = {"Icosahedron", 20};

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == p1.first)
        {
            sum += p1.second;
        }
        else if (s == p2.first)
        {
            sum += p2.second;
        }
        else if (s == p3.first)
        {
            sum += p3.second;
        }
        else if (s == p4.first)
        {
            sum += p4.second;
        }
        else if (s == p5.first)
        {
            sum += p5.second;
        }
    }
    cout << sum;

    return 0;
}
