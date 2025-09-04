// Efficiently calculate the value of (a ^ (b ^ c)) % (10^9 + 7)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back

const int mod = 1e9 + 7;
const int mod_choto = 1e9 + 6;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll m = 1, base_choto = b % mod_choto;
        while (c > 0)
        {
            if (c % 2 == 1)
            {
                m = (m * base_choto) % mod_choto;
            }
            base_choto = (base_choto * base_choto) % mod_choto;
            c /= 2;
        }
        ll ans = 1, ex = m, base = a % mod;
        while (ex > 0)
        {
            if (ex % 2 == 1)
            {
                ans = (ans * base) % mod;
            }
            base = (base * base) % mod;
            ex /= 2;
        }
        cout << ans << endl;
    }
}