#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    
    vector<int> win(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (S[i][j] == 'o') {
                win[i]++;
            }
        }
    }
    
    vector<int> ans(N);
    for (int i = 0; i < N; i++) {
        ans[i] = i;
    }
    sort(ans.begin(), ans.end(), [&](int a, int b) {
        if (win[a] == win[b]) {
            return a < b;
        } else {
            return win[a] > win[b];
        }
    });
    
    for (int x : ans) {
        cout << x+1 << ' ';
    }
}
