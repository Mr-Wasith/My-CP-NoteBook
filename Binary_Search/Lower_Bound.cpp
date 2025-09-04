#include <bits/stdc++.h>
using namespace std;

// Lower_Bound = Returns the index of the first element greater than or equal to x
int lowerBound(vector<int> &v, int x)
{
    int low = 0, high = v.size();

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] >= x)
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
    cout << lowerBound(v, x) << endl;

    // Inbuilt Lower_Bound Function
    auto inblt = lower_bound(v.begin(), v.end(), x) - v.begin();
    cout << inblt << endl;
}
