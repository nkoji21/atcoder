#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] == 5 && a[1] == 5 && a[2] == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
