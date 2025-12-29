#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    map<char, int> blocks{};
    for (int i = 0; i < T; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        blocks['A'] = a;
        blocks['B'] = b;
        blocks['C'] = c;

        int cnt = 0;

        // ABC削除
        while (blocks.at('A') > 0 && blocks.at('B') > 0 && blocks.at('C') > 0)
        {
            blocks['A']--;
            blocks['B']--;
            blocks['C']--;

            cnt++;
        }

        // ACと、AorBorCを削除
        while (blocks.at('A') > 0 && blocks.at('C') > 0)
        {
            blocks['A']--;
            blocks['C']--;

            if ((blocks.at('A') == 0 || blocks.at('B') == 0) && blocks.at('C') > 0)
            {
                blocks['C']--;
            }
            else if ((blocks.at('C') == 0 || blocks.at('B') == 0) && blocks.at('A') > 0)
            {
                blocks['A']--;
            }
            else
            {
                blocks['B']--;
            }

            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}