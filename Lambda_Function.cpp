#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    // Lambda Function
    auto sum = [](int a, int b)
    { return a + b; };

    int ans = sum(x, y);
    cout << ans << endl;
}