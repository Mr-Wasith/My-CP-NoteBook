#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(std::vector<std::string> &strs)
{
    if (strs.empty())
        return "";

    // Sort the vector
    sort(strs.begin(), strs.end());

    // Compare the first and last strings in the sorted vector
    string first = strs[0];
    string last = strs[strs.size() - 1];
    int i = 0;

    // Find the common prefix between the first and last string
    while (i < first.size() && i < last.size() && first[i] == last[i])
    {
        i++;
    }

    return first.substr(0, i);
}

int main()
{
    vector<std::string> strs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
}