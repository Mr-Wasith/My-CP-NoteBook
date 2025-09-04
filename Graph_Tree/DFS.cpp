// Time Complexity --> O(V+E)

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    // Section : 1 --> Take action on vertex after entering the vertex
    vis[vertex] = true;
    cout << vertex << " ";
    for (int child : g[vertex])
    {
        // Section : 2 --> Take action on child before entering the child node
        if (vis[child])
            continue;

        dfs(child);
        // Section : 3 --> Take action on child after exiting child node
    }
    // Section : 4 --> Take action on vertex before exiting the vertex
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);
}