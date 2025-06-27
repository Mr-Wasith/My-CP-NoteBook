#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    auto dfs = [&](int vertex, auto &&dfs) -> void
    {
        vis[vertex] = true;

        for (int child : g[vertex])
        {
            if (vis[child])
                continue;
            dfs(child, dfs);
        }
    };
}
