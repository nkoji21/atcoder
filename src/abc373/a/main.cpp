#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;

    int cnt = 0;

    for (int i = 0; i < 12; i++)
    {
        cin >> S;
        if (S.size() == i + 1)
            cnt++;
    }

    cout << cnt << endl;
}