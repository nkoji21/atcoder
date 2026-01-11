#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double ans = 0;
    int currentX = 0, currentY = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        ans += sqrt(pow(currentX - x, 2) + pow(currentY - y, 2));

        currentX = x, currentY = y;
    }

    ans += sqrt(pow(currentX - 0, 2) + pow(currentY - 0, 2));
    cout << fixed << setprecision(6) << ans << endl;
}