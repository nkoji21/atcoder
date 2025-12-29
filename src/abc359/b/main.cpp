#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(2 * N);
    for (int i = 0; i < N * 2; i++)
    {
        cin >> A[i];
    }

    int cnt = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == A[i + 2])
            cnt++;
    }

    cout << cnt << endl;
}