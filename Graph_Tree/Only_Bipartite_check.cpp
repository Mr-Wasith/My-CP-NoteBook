// Time Complexity --> O(V+E)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int color[N];

bool dfs(int vertex, int c)
{
    color[vertex] = c;
    for (int child : g[vertex])
    {
        if (color[child] == 0)
        {
            if (!dfs(child, 3 - c))
                return false;
        }
        else if (color[child] == color[vertex])
        {
            return false;
        }
    }
    return true;
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

    bool isBipartite = true;
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
        {
            if (!dfs(i, 1))
            {
                isBipartite = false;
                break;
            }
        }
    }
    if (isBipartite)
        cout << "The graph is Bipartite (Bi-colorable)." << endl;
    else
        cout << "The graph is NOT Bipartite (Not Bi-colorable)." << endl;
}
