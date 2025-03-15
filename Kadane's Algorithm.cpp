// Find the maxium subarray using Kadane's Algorithm
// time Complexity O(n)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += v[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum << endl;
}