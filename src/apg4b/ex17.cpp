#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    
    vector<int> apple(N);
    vector<int> pineapple(N);
    
    for (int i = 0; i < N; i++) cin >> apple[i];
    for (int i = 0; i < N; i++) cin >> pineapple[i];
    
    int cnt = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (apple[i] + pineapple[j] == S) {
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
}
