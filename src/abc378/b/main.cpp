#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 入力を受け取る
    int N;
    cin >> N;

    vector<int> q(N), r(N);
    for (int i = 0; i < N; i++)
    {
        cin >> q[i] >> r[i];
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int t, d;
        cin >> t >> d;
        t--; // 0スタートのためデクリメント

        d -= r[t];
        int ans = (d + q[t] - 1) / q[t] * q[t];
        ans += r[t];

        cout << ans << endl;
    }
}