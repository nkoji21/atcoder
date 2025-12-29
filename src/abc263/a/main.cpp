#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    if ((a[0] == a[2] && a[3] == a[4]) || (a[0] == a[1] && a[2] == a[4]))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
