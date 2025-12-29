#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Ai = -1e9, Bj = -1e9;
    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        Ai = max(Ai, A[i]);
    }

    for (int j = 0; j < N; j++)
    {
        cin >> B[j];
        Bj = max(Bj, B[j]);
    }

    cout << Ai + Bj << endl;
}