// Explanation --> Shayan's Stream : Graph Algorithm Problem solving
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll n, m, x, y, num[3], ans[2000005];
vector<ll> graph[2000005];

void dfs(int u, int color)
{
    ans[u] = color;
    num[color]++;
    for (auto v : graph[u])
        if (ans[v] == 0)
            dfs(v, 3 - color);
        else if (ans[v] == color)
        {
            cout << -1 << endl;
            exit(0);
        }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
        if (ans[i] == 0)
            dfs(i, 1);

    for (int id = 1; id <= 2; id++)
    {
        cout << num[id] << endl;
        for (int i = 1; i <= n; i++)
            if (ans[i] == id)
                cout << i << " ";
        cout << endl;
    }
}
