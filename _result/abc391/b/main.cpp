#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool exists(vector<string> &s, vector<string> &t, int m, int a, int b)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[a + i][b + j] != t[i][j])
                return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < m; i++)
        cin >> t[i];

    for (int a = 0; a <= n - m; a++)
    {
        for (int b = 0; b <= n - m; b++)
        {
            if (exists(s, t, m, a, b))
            {
                cout << a + 1 << " " << b + 1 << endl;
                return 0;
            }
        }
    }
}
