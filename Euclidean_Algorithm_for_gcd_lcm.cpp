#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
    {
        return gcd(b % a, a);
    }
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int GCD = gcd(a, b);
    int LCM = lcm(a, b);
    cout << "Gcd of a,b : " << GCD << endl;
    cout << "Lcm of a,b : " << LCM << endl;
}