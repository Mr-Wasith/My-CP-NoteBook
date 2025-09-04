// If a sorted array is Rotated -------
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = n - 1;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] > v[r])
        {
            l = mid + 1;
        }
        else if (v[mid] < v[r])
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            // Duplicate elements
            r--;
        }
    }
    cout << ans << endl;
}
