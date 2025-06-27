#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int power(int base, int exp, int mod)
{
    int result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (1LL * result * base) % mod;
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Modular inverse using Fermat's Little Theorem
int modInverse(int b, int m)
{
    return power(b, m - 2, m);
}

int modDivide(int a, int b, int m)
{

    // Division not possible
    if (b == 0 || __gcd(b, m) != 1)
        return -1;

    int inv = modInverse(b, m);
    return (1LL * a % m * inv % m) % m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 10, b = 2, m = 13;

    cout << modDivide(a, b, m) << endl;
}