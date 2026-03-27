// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     int count = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '4' || s[i] == '7')
//         {
//             count++;
//         }
//     }

//     bool flag = false;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if ((s[i] == '4' || s[i] == '7') && (count == 4 || count == 7))
//         {
//             flag = true;
//         }
//     }

//     if(flag==true)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int count = 0;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '4' || s[i] == '7')
//         {
//             count++;
//         }
//     }

//     cout << count;

//     if (count == 4 || count == 7)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     int count = 0;

//     // Step 1: Check if all digits are 4 or 7
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] != '4' && s[i] != '7') {
//             cout << "NO";  // If any digit is not 4 or 7, print "NO" and exit
//             return 0;
//         }
//         // Step 2: Count the lucky digits (4 or 7)
//         if (s[i] == '4' || s[i] == '7') {
//             count++;
//         }
//     }

//     // Step 3: Check if the count of lucky digits is 4 or 7
//     if (count == 4 || count == 7) {
//         cout << "YES";  // It's a nearly lucky number
//     } else {
//         cout << "NO";   // It's not a nearly lucky number
//     }

//     return 0;
// }
