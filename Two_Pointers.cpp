#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-3, 2, 3, 4, 6, 8, 15};
    int fr = 0;
    int end = v.size() - 1;
    int target = 9;
    while (end > fr)
    {
        if (v[fr] + v[end] > target)
        {
            end--;
        }
        else if (v[fr] + v[end] < target)
        {
            fr++;
        }
        else
        {
            cout << fr << " " << end << endl;
            break;
        }
    }
}
