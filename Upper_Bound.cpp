#include <bits/stdc++.h>
using namespace std;

// Upper_Bound = Returns the index of the first element greater than x
int upperBound(vector<int> &v, int x)
{
    int low = 0, high = v.size();

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] > x)
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

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
    int x;
    cin >> x;
    cout << upperBound(v, x) << endl;

    // Inbuilt Upper_Bound Function
    auto inblt = upper_bound(v.begin(), v.end(), x) - v.begin();
    cout << inblt << endl;
}
