// Tutorial from Apna College

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{

    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << n << " ";
    print(n - 1);
    for (int i = 1; i <= n; i++)
    {
        cout << n << " Rahat" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
}