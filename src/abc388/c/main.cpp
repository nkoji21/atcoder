#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    
    long long cnt = 0;
    for (int i = 0; i < N; i++) {
        long long target = A[i] * 2;
        
        int idx = lower_bound(A.begin() + i+1, A.end(), target) - A.begin();
        
        cnt += (N - idx);
    }
    
    cout << cnt << endl;
}