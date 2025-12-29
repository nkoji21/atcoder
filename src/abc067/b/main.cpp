#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> l(N);

    // 入力を受け取る
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    // 大きい順にソート
    sort(l.begin(), l.end(), greater<int>());

    int sum = 0;

    for (int i = 0; i < K; i++) {
        sum += l[i];
    }

    cout << sum << endl;
}
