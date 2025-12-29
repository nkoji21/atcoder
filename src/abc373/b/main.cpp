#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int ans = 0;

    string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < key.size() - 1; i++)
    {
        if (S.find(key[i]) < S.find(key[i + 1]))
        {
            ans += S.find(key[i + 1]) - S.find(key[i]);
        }
        else
        {
            ans += S.find(key[i]) - S.find(key[i + 1]);
        }
    }

    cout << ans << endl;
}