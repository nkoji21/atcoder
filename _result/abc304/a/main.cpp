#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<string> s(n);
    vector<int> a(n);

    int idx = 0, min_value = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> a[i];
        if (min_value > a[i])
        {
            min_value = a[i];
            idx = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[idx % n] << endl;
        idx++;
    }
}
