// Count the majority element (Freq > n/2) -> Time complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 1, 1};
    int n = v.size();
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = v[i];
        }
        if (ans == v[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << "Majority element: " << ans << endl;
    }
    else
    {
        cout << "No majority element exists." << endl;
    }
}