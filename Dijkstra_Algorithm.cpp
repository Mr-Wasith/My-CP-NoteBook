#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int, int>> g[N];

void dijkstra(int source, int n)
{
    vector<int> dist(n + 1, INF);
    set<pair<int, int>> st;

    dist[source] = 0;
    st.insert({0, source});

    while (!st.empty())
    {
        auto node = *st.begin();
        int v = node.second;
        st.erase(st.begin());

        for (auto child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;

            if (dist[v] + wt < dist[child_v])
            {
                st.erase({dist[child_v], child_v});
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }

    cout << "Shortest distances from node " << source << ": " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
            cout << "Node " << i << ": -1 (Unreachable)" << endl;
        else
            cout << "Node " << i << ": " << dist[i] << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        g[x].push_back({y, wt});
        // g[y].push_back({x, wt}); // Uncomment for an undirected graph
    }

    int source;
    cin >> source;
    dijkstra(source, n);
}
