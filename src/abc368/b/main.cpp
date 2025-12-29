#include <bits/stdc++.h>
using namespace std;

// 正の整数をカウントする関数
int positive_count(vector<int> &a) {
    int count = 0;
    
    for (int p : a) {
        if (p > 0) count++;
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int res = 0;

    while(positive_count(a) > 1) {
        // 降順にソート
        sort(a.begin(), a.end(), greater<int>());
        
        a[0] -= 1;
        a[1] -= 1;
        res++;
    }
    
    cout << res << endl;
}