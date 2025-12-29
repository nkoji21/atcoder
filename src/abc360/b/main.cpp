#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    for (int w = 1; w < s.size(); w++)
    {
        for (int c = 0; c < w; c++)
        {

            string ns = "";

            // 縦で見ていく処理
            for (int i = c; i < s.size(); i += w)
            {
                ns += s[i];
            }

            if (ns == t)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}