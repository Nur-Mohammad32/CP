#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;

    // Student(string name, int age, int marks)
    // {
    //     this->name = name;
    //     this->age = age;
    //     this->marks = marks;
    // }
};

class cmp
{
public:
    bool operator()(Student &a, Student &b)
    {
        if (a.marks != b.marks)
        {
            return a.marks < b.marks;
        }
        if (a.age != b.age)
        {
            return a.age > b.age;
        }
        return a.name > b.name;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> s.name >> s.age >> s.marks;
        pq.push(s);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            Student s;
            cin >> s.name >> s.age >> s.marks;
            pq.push(s);
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.age << " " << top.marks << endl;
            }
        }
        else if (c == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.age << " " << top.marks << endl;
            }
        }
        else if (c == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Student top = pq.top();
                    cout << top.name << " " << top.age << " " << top.marks << endl;
                }
            }
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;
//     int marks;
// };

// class cmp
// {
// public:
//     bool operator()(Student &a, Student &b)
//     {
//         if (a.marks != b.marks)
//         {
//             return a.marks < b.marks;
//         }
//         if (a.age != b.age)
//         {
//             return a.age > b.age;
//         }
//         return a.name > b.name;
//     }
// };

// class stdntLst
// {
// public:
//     priority_queue<Student, vector<Student>, cmp> pq;

// public:
//     void insert(Student &s)
//     {
//         pq.push(s);
//     }

//     void print()
//     {
//         if (pq.empty())
//         {
//             cout << "Empty" << endl;
//         }
//         else
//         {
//             Student top = pq.top();
//             cout << top.name << " " << top.age << " " << top.marks << endl;
//         }
//     }

//     void delete_top()
//     {
//         if (pq.empty())
//         {
//             cout << "Empty" << endl;
//         }
//         else
//         {
//             pq.pop();
//             print();
//         }
//     }
// };

// int main()
// {

//     int n;
//     cin >> n;

//     stdntLst sl;

//     for (int i = 0; i < n; i++)
//     {
//         Student s;
//         cin >> s.name >> s.age >> s.marks;
//         sl.insert(s);
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int c;
//         cin >> c;
//         if (c == 0)
//         {
//             Student s;
//             cin >> s.name >> s.age >> s.marks;
//             sl.insert(s);
//             sl.print();
//         }
//         else if (c == 1)
//         {
//             sl.print();
//         }
//         else if (c == 2)
//         {
//             sl.delete_top();
//         }
//     }

//     return 0;
// }
