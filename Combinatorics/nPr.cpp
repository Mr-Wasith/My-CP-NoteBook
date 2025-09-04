#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9, mod = 1e9 + 7;

int fact[N], inv[N], factinv[N];
void precom()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = 1LL * i * fact[i - 1] % mod;
    }
    inv[1] = 1;
    for (int i = 2; i < N; i++)
    {
        inv[i] = (-(1LL * mod / i) * inv[mod % i]) % mod;
        inv[i] = (inv[i] + mod) % mod;
    }
    factinv[0] = 1;
    for (int i = 1; i < N; i++)
    {
        factinv[i] = 1LL * inv[i] * factinv[i - 1] % mod;
    }
}
int nPr(int n, int r)
{
    if (n < r || n < 0 || r < 0)
        return 0;
    return 1LL * fact[n] % mod * factinv[r] % mod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    precom();
    int q;
    cin >> q;
    while (q--)
    {
        int n, r;
        cin >> n >> r;
        cout << nPr(n, r) << endl;
    }
}