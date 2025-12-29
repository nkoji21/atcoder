#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    bool prefix = true;
    for (int i = 0; i < n; i++)
    {
        if (t[i] != s[i])
            prefix = false;
    }

    bool suffix = true;
    for (int i = 0; i < n; i++)
    {
        if (t[m - n + i] != s[i])
            suffix = false;
    }

    if (prefix)
        cout << (suffix ? 0 : 1) << endl;
    else
        cout << (suffix ? 2 : 3) << endl;
}