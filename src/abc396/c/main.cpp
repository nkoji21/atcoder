#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> b(n), w(m);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
        cin >> w[i];
    sort(b.begin(), b.end(), greater<ll>());
    sort(w.begin(), w.end(), greater<ll>());
    vector<ll> b_sum(n + 1, 0), w_sum(m + 1, 0);
    for (int i = 0; i < n; i++)
        b_sum[i + 1] = b_sum[i] + b[i];
    for (int i = 0; i < m; i++)
        w_sum[i + 1] = w_sum[i] + w[i];

    vector<ll> b_max(n + 1, 0);
    b_max[n] = b_sum[n];
    for (int i = n - 1; i >= 0; i--)
    {
        b_max[i] = max(b_sum[i], b_max[i + 1]);
    }

    int limit = min(n, m);
    ll ans = 0;
    for (int i = 0; i <= limit; i++)
    {
        ans = max(ans, b_max[i] + w_sum[i]);
    }

    cout << ans << endl;
}
