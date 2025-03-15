#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        curr_sum += v[i];
    }

    max_sum = curr_sum;
    for (int i = k; i < n; i++)
    {
        curr_sum += (v[i] - v[i - k]);
        max_sum = max(curr_sum, max_sum);
    }

    cout << max_sum << endl;
}