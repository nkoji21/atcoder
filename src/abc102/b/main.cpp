#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) cin >> A[i];
    
    int currentMax = A[0];
    int currentMin = A[0];
    
    for (int i = 0; i < N; i++) {
        currentMax = max(currentMax, A[i]);
        currentMin = min(currentMin, A[i]);
    }
    
    cout << currentMax - currentMin << endl;
}