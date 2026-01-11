#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> S(8, vector<char>(8));

    // 入力を受け取る
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> S[i][j];
        }
    }

    vector<bool> goodRows(8), goodColumns(8);

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // コマが置かれていた場合
            if (S[i][j] == '#')
            {
                goodRows[i] = true;
                goodColumns[j] = true;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // どちらもfalseのときカウント
            if (!goodRows[i] && !goodColumns[j])
                cnt++;
        }
    }

    cout << cnt << endl;
}