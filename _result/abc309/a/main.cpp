#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % 3 != 0 && a + 1 == b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
