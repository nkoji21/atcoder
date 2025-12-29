#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    if (n % 5 < 3)
        cout << n - (n % 5) << endl;
    else
        cout << n + 5 - (n % 5) << endl;
}
