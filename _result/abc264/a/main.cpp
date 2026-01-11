#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int l, r;
    cin >> l >> r;

    l--;
    string s = "atcoder";
    cout << s.substr(l, r - l) << endl;
}
