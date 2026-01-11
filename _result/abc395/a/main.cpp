#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            cout << "No" << endl;
            return (0);
        }
    }

    cout << "Yes" << endl;
}
