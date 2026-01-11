#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int max_value = 0;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 1; i < n; i++)
        max_value = max(max_value, p[i]);
    cout << max(0, max_value + 1 - p[0]) << endl;

    return (0);
}
