#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    bool is_sort = false;
    while (!is_sort)
    {
        is_sort = true;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i].size() > s[i + 1].size())
            {
                string tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                is_sort = false;
            }
        }
    }

    for (string word : s)
        cout << word;
    cout << endl;
    return (0);
}
