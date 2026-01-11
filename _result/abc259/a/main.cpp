#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;

    if (M >= X)
        cout << T << endl;
    else
        cout << T - (X - M) * D << endl;
}
