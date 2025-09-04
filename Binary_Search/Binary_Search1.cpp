#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int srh;
        cin >> srh;
        int low = 0, high = n - 1;
        int mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (v[mid] < srh)
            {
                low = mid + 1;
            }
            else
                high = mid;
        }
        if (v[low] == srh)
        {
            cout << low << endl;
        }
        else if (v[high] == srh)
        {
            cout << high + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
