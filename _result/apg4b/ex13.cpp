#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> A(N);
    int sum = 0;

    // 合計点を求める
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        sum += A.at(i);
    }

    // 平均点を求める
    int avg = sum / N;

    // 偏差を求める
    for (int i = 0; i < N; i++)
    {
        if (A.at(i) < avg)
        {
            cout << avg - A.at(i) << endl;
        }
        else
        {
            cout << A.at(i) - avg << endl;
        }
    }
}