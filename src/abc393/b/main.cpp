#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (j - i == k - j && s[i] == 'A' && s[j] == 'B' && s[k] == 'C')
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return (0);
}
