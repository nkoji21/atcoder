#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    if (S.find('R') < S.find('M'))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}