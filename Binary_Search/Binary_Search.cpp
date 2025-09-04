#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // a is already sorted
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool found = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] == x)
            {
                found = true;
                break;
            }
            else if (v[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
