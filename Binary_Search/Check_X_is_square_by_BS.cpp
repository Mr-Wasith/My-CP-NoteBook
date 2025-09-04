#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        bool flag = true;
        ll l = 0, r = x - 1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (mid * mid == x)
            {
                cout << x << " is a Sqaure value" << endl;
                flag = false;
            }
            if (mid * mid < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
            cout << x << " is not a Square value" << endl;
    }
}
