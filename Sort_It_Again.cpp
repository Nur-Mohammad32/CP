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

    Student()
    {
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }

    void input()
    {
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
    }

    void output()
    {
        cout << nm << " " << cls << " " << s << " " << id << " " << math_marks << " " << eng_marks << endl;
    }
};

bool cmp(Student &a, Student &b)
{
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
    if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }
    return a.id < b.id;
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