#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = true;
    for (int i = 0; i < (n - 2); i++)
    {
        if ((a[i + 1] * a[i + 1]) != (a[i] * a[i + 2]))
            flag = false;
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
