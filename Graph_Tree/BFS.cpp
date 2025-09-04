// Time Complexity --> O(V+E)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];

int vis[N];
int level[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int curr_v = q.front();
        q.pop();
        cout << curr_v << " ";

        for (int child : g[curr_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[curr_v] + 1;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    // (int i = 1; i <= n; i++)
    //{
    //    cout << i << ": " << level[i] << endl;
    //}
}
