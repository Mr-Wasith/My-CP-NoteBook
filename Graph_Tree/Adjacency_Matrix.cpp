// Space Complexity --> O(N^2)
// N must be less than equal to 10^4

/*
If we want to store with edge's weight, That time we will do like that way:
        graph[v1][v2] = wt;
        graph[v2][v1] = wt;
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int graph[N][N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}