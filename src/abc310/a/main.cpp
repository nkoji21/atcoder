#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    int minD = *min_element(d.begin(), d.end());
    cout << min(p, minD + q) << endl;
}
