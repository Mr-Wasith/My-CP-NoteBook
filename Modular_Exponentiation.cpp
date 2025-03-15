// Efficiently calculate the value of (a ^ b) % (10^9 + 7)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = 1;
        a %= mod;
        while (b > 0)
        {
            if (b % 2 != 0)
            {
                ans = (ans * a) % mod;
            }
            a = (a * a) % mod;
            b /= 2;
        }
        cout << ans << endl;
    }
}
