#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int ans = 1;
    int max_cnt = 0;
    
    for (int i = 1; i <= N; i++) {
        int cnt = 0;
        int tmp = i; // forのiに影響を及ぼさないために
        
        while(true) {
            bool exist_odd = false; // 奇数かどうかのフラグ
            
            if (tmp % 2 != 0) exist_odd = true;
            
            if (exist_odd) break;
            
            tmp /= 2;

            cnt++;
        }
        
        if (cnt > max_cnt) {
            max_cnt = cnt;
            ans = i;
        }
    }
    
    cout << ans << endl;
}