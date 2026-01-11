#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int y;
    cin >> y;

    while (y)
    {
        if (y % 4 == 2)
        {
            cout << y << endl;
            return (0);
        }
        y++;
    }
}
