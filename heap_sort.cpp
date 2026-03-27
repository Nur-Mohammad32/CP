#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void delete_heap(vector<int> &v, vector<int> &v1)
{
    v1.push_back(v[0]);
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> v, vector<int> v1)
{
    for (int val : v1)
        cout << val << " ";
    cout << endl;
}
int main()
{
    cout << "Enter the number of elements : ";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter Unsorted List : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        delete_heap(v, v1);
    }

    reverse(v1.begin(), v1.end());
    cout << "Sorted List is : ";
    print_heap(v, v1);

    return 0;
}