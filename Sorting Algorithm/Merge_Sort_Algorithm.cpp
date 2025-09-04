#include <bits/stdc++.h>
using namespace std;

void merge(int l, int r, int mid, vector<int> &v)
{
    int l_sz = (mid - l + 1);
    int r_sz = r - mid;
    vector<int> left(l_sz + 1);
    vector<int> right(r_sz + 1);
    for (int i = 0; l + i <= mid; i++)
    {
        left[i] = v[l + i];
    }
    left[l_sz] = 1e9;
    for (int i = 0; mid + i + 1 <= r; i++)
    {
        right[i] = v[mid + i + 1];
    }
    right[r_sz] = 1e9;
    int i = 0, j = 0, cnt = 0;
    while (i < left.size() && j < right.size() && cnt <= (r - l))
    {
        if (left[i] <= right[j])
        {
            v[l + cnt] = left[i];
            i++;
            cnt++;
        }
        else
        {
            v[l + cnt] = right[j];
            j++;
            cnt++;
        }
    }
}

void mergesort(int l, int r, vector<int> &v)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergesort(l, mid, v);
    mergesort(mid + 1, r, v);
    merge(l, r, mid, v);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    mergesort(0, n - 1, v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}