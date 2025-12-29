#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        if (s[i] == 'B')
            b++;
        if (s[i] == 'C')
            c++;

        if (a >= 1 && b >= 1 && c >= 1)
        {
            cout << i + 1 << endl;
            return (0);
        }
    }
}
