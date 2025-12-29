#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; // N: 青いカード 1円貰える
    cin >> N;

    // 要素数N個のvector
    vector<string> s(N);
    
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    int M; // M: 赤いカード 1円失う
    cin >> M;

    // 要素数M個のvector
    vector<string> t(M);
    
    for (int i = 0; i < M; i++) {
        cin >> t[i];
    }
    
    int ans = 0;

    for (int i = 0; i < N; i++) {
        int score = 0;
        
        for (int j = 0; j < N; j++) {
            if (s[j] == s[i]) score++;
        }

        for (int j = 0; j < M; j++) {
            if (t[j] == s[i]) score--;
        }

        ans = max(ans, score);
    }
    
    cout << ans << endl;
}