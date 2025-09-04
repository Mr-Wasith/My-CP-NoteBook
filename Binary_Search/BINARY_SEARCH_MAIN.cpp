// BS by Errichto

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int tar;
    cin >> tar;
    int L = 0, R = n - 1;
    bool flag = true;
    while (L <= R)
    {
        int mid = L + (R - L) / 2;
        if (v[mid] == tar)
        {
            cout << mid << endl;
            flag = false;
        }
        if (v[mid] < tar)
        {
            L = mid + 1;
        }
        else
        {
            R = mid - 1;
        }
    }
    if (flag)
        cout << "Not Found" << endl;
}