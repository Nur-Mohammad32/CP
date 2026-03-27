#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p1;
    p1 = make_pair(2, "algo");

    pair<int, string> p2(2, "graph");

    pair<string, int> p3;
    p3 = {"tree", 5};

    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    pair<int, int> p4(a, b);

    cout << p1.first << "," << p1.second << endl;
    cout << p2.first << "," << p2.second << endl;
    cout << p3.first << "," << p3.second << endl;
    cout << p4.first << "," << p4.second << endl;

    return 0;
}
