#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int row = 6 + ((N - 1) / 2);
    int col = 2 * row - 1;

    int star1, space1;

    for (int i = 1; i <= row; i++)
    {
        star1 = 2 * i - 1;
        space1 = (col - star1) / 2;

        for (int j = 0; j < space1; j++)
            cout << " ";
        for (int k = 0; k < star1; k++)
            cout << "*";
        cout << "\n";
    }

    int space2 = (col - N) / 2;
    int star2 = N;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space2; j++)
            cout << " ";
        for (int k = 0; k < star2; k++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

//     int row = 6 + ((N - 1) / 2);
//     int col = 2 * row - 1;

//     int star = 0, space = 0;

//     for (int i = 1; i <= row; i++)
//     {
//         star = 2 * i - 1;
//         space = (col - star) / 2;

//         for (int j = 0; j < space; j++)
//             cout << " ";
//         for (int k = 0; k < star; k++)
//             cout << "*";
//         cout << "\n";
//     }

//     space = (col - N) / 2;
//     star = N;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < space; j++)
//             cout << " ";
//         for (int k = 0; k < star; k++)
//             cout << "*";
//         cout << "\n";
//     }

//     return 0;
// }
