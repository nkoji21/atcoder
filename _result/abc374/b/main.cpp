#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int cnt = 0;

    if (S == T)
    {
        cout << cnt << endl;
        return 0;
    }

    if (S != T)
    {
        for (int i = 0; i < max(S, T).size(); i++)
        {
            cnt++;
            if (S[i] != T[i])
                break;
        }
    }

    cout << cnt << endl;
}