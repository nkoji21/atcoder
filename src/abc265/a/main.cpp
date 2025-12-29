#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    if (x * 3 > y)
        cout << (n % 3) * x + (n / 3) * y << endl;
    else
        cout << x * n << endl;
}
