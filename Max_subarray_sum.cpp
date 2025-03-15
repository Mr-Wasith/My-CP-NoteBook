// Maximum subarray sum using Sliding window Algorithm

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back

int maxSubarraySum(vector<int> &v, int k)
{
    int maxSum = INT_MIN;
    int windowSum = 0;

    for (int i = 0; i < k; i++)
    {
        windowSum += v[i];
    }

    for (int i = k; i < v.size(); i++)
    {
        windowSum += v[i] - v[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main()
{
    vector<int> v = {2, 1, 5, 1, 3, 2};
    int windowSize = 3;
    int ans = maxSubarraySum(v, windowSize);
    cout << ans << endl;
}