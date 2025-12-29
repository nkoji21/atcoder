#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int i = (S[0] - '0'), j = 0;
    if (S[2] == '8')
    {
        i++;
        j = 1;
    }
    else
    {
        j = (S[2] - '0') + 1;
    }

    cout << i << '-' << j << endl;

    return 0;
}