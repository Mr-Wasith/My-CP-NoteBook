#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void dfs(int i, int j, vector<vector<char>> &grid)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        return;
    if (grid[i][j] != 'L')
        return;

    grid[i][j] = 'W';

    dfs(i - 1, j, grid);
    dfs(i + 1, j, grid);
    dfs(i, j + 1, grid);
    dfs(i, j - 1, grid);
    dfs(i + 1, j + 1, grid);
    dfs(i + 1, j - 1, grid);
    dfs(i - 1, j + 1, grid);
    dfs(i - 1, j - 1, grid);
}

int CntRegion(vector<vector<char>> &grid)
{
    int cnt = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 'L')
            {
                cnt++;
                dfs(i, j, grid);
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        int ans = CntRegion(grid);
        cout << ans << endl;
    }
}
