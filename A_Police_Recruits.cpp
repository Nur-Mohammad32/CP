#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int av = 0;
    int unt = 0;

    for (int i = 0; i < n; ++i)
    {
        int event;
        cin >> event;

        if (event == -1)
        {
            if (av > 0)
            {
                av--;
            }
            else
            {
                unt++;
            }
        }
        else
        {
            av += event;
        }
    }

    cout << unt << endl;
    return 0;
}
