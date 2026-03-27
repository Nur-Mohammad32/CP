#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id, marks;
    string name;
    char section;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        student s[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
        }

        student std1 = s[0];
        for (int i = 1; i < 3; i++)
        {
            if (s[i].marks > std1.marks || (s[i].marks == std1.marks && s[i].id < std1.id))
            {
                std1 = s[i];
            }
        }

        cout << std1.id << " " << std1.name << " " << std1.section << " " << std1.marks << endl;
    }

    return 0;
}