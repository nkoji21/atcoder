#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for (auto &nx : s)
        mp[nx]++;

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp[i] == 1)
        {
            cout << i << endl;
            return (0);
        }
    }

    cout << "-1" << endl;
    return (0);
}
