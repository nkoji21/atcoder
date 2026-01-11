#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j <= i; j++)
        {
            cin >> A[i][j];
            A[i][j]--; // 添字が0から始まるため
        }

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        if (ans >= i)
            ans = A[ans][i];
        else
            ans = A[i][ans];
    }

    // デクリメントしていたため
    ans++;

    cout << ans << endl;
}