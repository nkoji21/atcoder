#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int days = n * 7;
    vector<int> a(days);
    for (int i = 0; i < days; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 1; i <= days; i++)
    {
        ans += a[i - 1];
        if (i % 7 == 0)
        {
            cout << ans << " ";
            ans = 0;
        }
    }
}
