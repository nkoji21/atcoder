#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string d;
    cin >> d;

    string ans;
    for (char c : d)
    {
        if (c == 'N')
            ans += 'S';
        if (c == 'S')
            ans += 'N';
        if (c == 'E')
            ans += 'W';
        if (c == 'W')
            ans += 'E';
    }

    cout << ans << endl;
}
