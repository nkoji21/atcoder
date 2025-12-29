#include <bits/stdc++.h>
using namespace std;

void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            // 誤った値が書かれていた場合
            if (A[i][j] != (i + 1) * (j + 1))
            {
                A[i][j] = (i + 1) * (j + 1);
                wrong_count++;
            }
            else
            {
                correct_count++;
            }
        }
    }
}

int main()
{
    // 入力を受け取る
    vector<vector<int>> A(9, vector<int>(9));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> A[i][j];
        }
    }

    int correct_count = 0;
    int wrong_count = 0;

    saiten(A, correct_count, wrong_count);

    // 正しく修正した表を出力
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            cout << A[i][j];

            if (j < 8)
                cout << " ";
            else
                cout << endl;
        }
    }

    cout << correct_count << endl; // 正しいマスの個数を出力
    cout << wrong_count << endl;   // 誤ってるマスの個数を出力
}