#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    sort(S.begin(), S.end());

    if (S == "ABC")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}