#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string sub)
{
    int left = 0, right = sub.size() - 1;

    while (left < right)
    {
        if (sub[left] != sub[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main()
{
    string S;
    cin >> S;

    int ans = 1;
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = i + 1; j < S.size(); j++)
        {
            string sub = "";
            for (int k = i; k <= j; k++)
            {
                sub += S[k];
                if (is_palindrome(sub))
                {
                    ans = max(ans, int(sub.size()));
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}