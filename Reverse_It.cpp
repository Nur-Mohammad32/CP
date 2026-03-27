#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;

    void input()
    {
        cin >> nm >> cls >> s >> id;
    }

    void output()
    {
        cout << nm << " " << cls << " " << s << " " << id << endl;
    }
};

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        students[i].input();
    }

    for (int i = 0; i < N / 2; i++)
    {
        swap(students[i].s, students[N - i - 1].s);
    }

    for (int i = 0; i < N; ++i)
    {
        students[i].output();
    }

    return 0;
}