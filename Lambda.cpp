#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    auto sum = [](int x, int y)
    { return x + y; };
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
}
