#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w,r,c;
    cin >> h >> w >> r >> c;
    
    int cnt = 0;
    
    // 上
    if (r != 1) cnt++;
    
    // 下
    if (r != h) cnt++;
    
    // 左
    if (c != 1) cnt++;
    
    // 右
    if (c != w) cnt++;
    
    cout << cnt << endl;
}