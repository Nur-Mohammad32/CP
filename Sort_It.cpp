#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char nm[101];
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;

    Student()
    {
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
        this->total_marks = total_marks;
    }

    void input()
    {
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
        total();
    }

    void total()
    {
        total_marks = math_marks + eng_marks;
    }

    void output()
    {
        cout << nm << " " << cls << " " << s << " " << id << " " << math_marks << " " << eng_marks << endl;
    }
};

bool cmp(Student &a, Student &b)
{
    if (a.total_marks == b.total_marks)
    {
        return a.id < b.id;
    }
    return a.total_marks > b.total_marks;
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; ++i)
    {
        students[i].input();
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; ++i)
    {
        students[i].output();
    }

    return 0;
}