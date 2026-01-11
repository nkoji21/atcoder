#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> S;

        if (S == "Takahashi")
            cnt++;
    }

    cout << cnt << endl;
}