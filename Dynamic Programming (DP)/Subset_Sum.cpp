#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &arr, int sum, vector<int> &subset)
{
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < arr[i - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
    }

    if (!dp[n][sum])
        return false;

    int i = n, j = sum;
    while (i > 0 && j > 0)
    {
        if (dp[i - 1][j])
        {
            i--;
        }
        else if (j >= arr[i - 1] && dp[i - 1][j - arr[i - 1]])
        {
            subset.push_back(arr[i - 1]);
            j -= arr[i - 1];
            i--;
        }
        else
        {
            i--;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    vector<int> subset;
    if (isSubsetSum(arr, sum, subset))
    {
        cout << "True\nSubset: ";
        for (int x : subset)
            cout << x << " ";
        cout << endl;
    }
    else
        cout << "False" << endl;
}
