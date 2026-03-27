#include <iostream>
using namespace std;

int solve_one(int k, int a, int b, int x, int y)
{
    auto cook = [&](int k, int a, int b, int x, int y) -> int
    {
        int cnt = 0;
        if (k >= a)
        {
            int first = (k - a) / x + 1;
            k -= first * x;
            cnt += first;
        }
        if (k >= b)
        {
            int second = (k - b) / y + 1;
            cnt += second;
        }
        return cnt;
    };

    // Try both orders and take the maximum
    return max(cook(k, a, b, x, y), cook(k, b, a, y, x));
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        cout << solve_one(k, a, b, x, y) << "\n";
    }
    return 0;
}
