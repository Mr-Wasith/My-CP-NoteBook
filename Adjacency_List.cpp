// Space Complexity --> O(N + M)

/*
If we want to store with edge's weight, That time we will
create vector of pairs and assign like that way :
vector<pair<int,int>> graph[N];

        graph[v1].push_back({v2,wt});
        graph[v2].push_back({v1,wt});

*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Node " << i << ": ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}