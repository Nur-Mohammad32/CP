#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string S, T;
        cin >> S >> T;

        int sl = S.length();
        int tl = T.length();

        string s1;

        for (int i = 0; i < min(sl, tl); i++)
        {
            s1 += S[i];
            s1 += T[i];
        }

        for (int i = min(sl, tl); i < sl; i++)
        {
            s1 += S[i];
        }

        for (int i = min(sl, tl); i < tl; i++)
        {
            s1 += T[i];
        }

        cout << s1 << endl;
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         char S[51], T[51];
//         scanf("%s %s", S, T);

//         int sl = 0, tl = 0;
//         while (S[sl] != '\0') {
//             sl++;
//         }
//         while (T[tl] != '\0') {
//             tl++;
//         }

//         char s1[101];
//         int idx = 0;

//         for (int i = 0; i < (sl < tl ? sl : tl); i++) {
//             s1[idx++] = S[i];
//             s1[idx++] = T[i];
//         }

//         for (int i = (sl < tl ? sl : tl); i < sl; i++) {
//             s1[idx++] = S[i];
//         }

//         for (int i = (sl < tl ? sl : tl); i < tl; i++) {
//             s1[idx++] = T[i];
//         }

//         s1[idx] = '\0';

//         printf("%s\n", s1);
//     }

//     return 0;
// }
