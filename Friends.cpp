#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 5;  // Adjusted for larger inputs
int par[N];              // Parent array
int group_size[N];       // Group size array

// Initialize DSU
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = i;       // Initially, each node is its own parent
        group_size[i] = 1; // Each node starts in its own group
    }
}

// Find with Path Compression
int dsu_find(int node)
{
    if (par[node] == node)
        return node;
    
    // Path compression step
    par[node] = dsu_find(par[node]);  // Recursively find and compress the path
    return par[node];
}

// Union by size
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    // Only unite if leaders are different
    if (leaderA != leaderB)
    {
        if (group_size[leaderA] > group_size[leaderB])
        {
            par[leaderB] = leaderA;  // Attach the smaller group under the larger group
            group_size[leaderA] += group_size[leaderB];
        }
        else
        {
            par[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

// Function to process each test case
int process_test_case(int n, int m)
{
    // Initialize DSU for this test case
    dsu_initialize(n);

    // Read and process each friendship pair
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        dsu_union_by_size(a, b);
    }

    // Find the size of the largest connected component
    int max_group_size = 0;
    for (int i = 1; i <= n; i++)
    {
        max_group_size = max(max_group_size, group_size[dsu_find(i)]);
    }

    return max_group_size;
}

// Main function to handle multiple test cases
int main()
{
    int t;
    cin >> t;  // Read the number of test cases
    while (t--)
    {
        int n, m;
        cin >> n >> m;  // Read number of citizens (n) and number of friendships (m)
        cout << process_test_case(n, m) << endl;  // Process and output the result for this test case
    }
    return 0;
}
