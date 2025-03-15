/*
Given Q queries. Q <= 10^5. In each query given V, Print
Subtree sum of V, Number of even numbers in Subtree of V

--> For this problem, We should use Pre-Computation Technique
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];

int subtree_sum[N];
int even_ct[N];

void dfs(int vertex, int par)
{
    if (vertex % 2 == 0)
    {
        even_ct[vertex]++;
    }

    subtree_sum[vertex] += vertex;

    for (int child : g[vertex])
    {
        if (child == par)
            continue;
        dfs(child, vertex);

        subtree_sum[vertex] += subtree_sum[child];
        even_ct[vertex] += even_ct[child];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1, 0);
    int q;
    cin >> q;
    while (q--)
    {
        int V;
        cin >> V;
        cout << "Subtree sum of V: " << subtree_sum[V] << endl;
        cout << "Even number count of V: " << even_ct[V] << endl;
    }
}