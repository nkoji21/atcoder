#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

int main() {
    int N;
    cin >> N;

    int res = 1e9;

    for (int A = 1; A < N; A++) {
        int B = N - A;
        
        int currentSum = digitSum(A) + digitSum(B);
        res = min(res, currentSum);
    }
    
    cout << res << endl;
}