#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string ans;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != '.')
            ans.push_back(S[i]);
    }

    for (char x : ans)
        cout << x;
}