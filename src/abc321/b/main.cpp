#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    while (a.back() <= 100)
    {
        vector<int> b = a;
        sort(b.begin(), b.end());
        int s = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            s += b[i];
            if (s >= x)
            {
                cout << a.back() << endl;
                return (0);
            }
        }
        a.back()++;
    }

    cout << -1 << endl;
}
