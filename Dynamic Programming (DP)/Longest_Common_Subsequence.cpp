#include <bits/stdc++.h>
using namespace std;

// Time Complexity --> O(N^2)

int dp[1005][1005];
int lcs(int i, int j, string &s1, string &s2)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = lcs(i - 1, j, s1, s2);
    ans = max(ans, lcs(i, j - 1, s1, s2));
    ans = max(ans, lcs(i - 1, j - 1, s1, s2) + (s1[i] == s2[j]));
    return dp[i][j] = ans;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    memset(dp, -1, sizeof(dp));
    cout << lcs(s1.size() - 1, s2.size() - 1, s1, s2) << endl;
}