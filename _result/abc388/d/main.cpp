#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int s = 0; // 石のある成人の人数
    vector<int> r(N); // i年に石がなくなる成人の数
    for (int i = 0; i < N; i++) {
        A[i] += s;
        // あと何年石を配れるか 0より小さくはならない
        int num = min(A[i], N-i-1);
        s++;
        A[i] -= num;
        r[i+num]++;
        
        s -= r[i];
    }
    
    for (int a : A) cout << a << ' ';
}