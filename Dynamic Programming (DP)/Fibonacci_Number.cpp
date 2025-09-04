#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

// 0 1 1 2 3 5 8 13 21 34 55 89 ..........
// Zero based Fibonacci number

int dp1[N];
int dp2[N];

// Top-Down Approach or Recursive DP
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (dp1[n] != -1) // Memoisation
        return dp1[n];

    return dp1[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    memset(dp1, -1, sizeof(dp1));
    int n;
    cin >> n;
    int ct = 0;

    // Bottom-Up Approach or Iterative DP
    dp2[0] = 0;
    dp2[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp2[i] = dp2[i - 1] + dp2[i - 2];
    }
    cout << dp2[n] << endl;

    cout << fib(n) << endl;
}