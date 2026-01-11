#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> S(H + 1);
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    bool is_kuro = false;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            // 黒じゃないならreturn
            if (S[i][j] == '.')
                continue;
            if (S[i][j] == '#')
                is_kuro = true;

            int cnt_kuro = 0;

            // 上
            if (i != 0 && S[i - 1][j] == '#')
            {
                cnt_kuro++;
            }

            // 右
            if (j != W - 1 && S[i][j + 1] == '#')
            {
                cnt_kuro++;
            }

            // 下
            if (i != H - 1 && S[i + 1][j] == '#')
            {
                cnt_kuro++;
            }

            // 左
            if (j != 0 && S[i][j - 1] == '#')
            {
                cnt_kuro++;
            }

            // cout << i << ' ' << j << ' ' << cnt_kuro << endl;
            if (!(cnt_kuro == 2 || cnt_kuro == 4))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    if (!is_kuro)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    // for (int i = 0; i < H; i++) {
    //   cout << S[i] << endl;
    // }

    return 0;
}