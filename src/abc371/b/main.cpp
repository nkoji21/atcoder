#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // 各家の配列をfalseとして初期化
    vector<bool> taro_exist(N, false);

    int A;
    char B;

    for (int i = 0; i < M; i++)
    {
        cin >> A >> B;

        if (B == 'F' || taro_exist[A])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
            taro_exist[A] = true;
        }
    }
}