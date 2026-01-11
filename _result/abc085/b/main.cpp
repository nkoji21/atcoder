#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d_list(N);
    
    for (int i = 0; i < N; i++) {
        cin >> d_list.at(i);
    }
    
    // 大きい順にソート
    sort(d_list.begin(), d_list.end());
    reverse(d_list.begin(), d_list.end());
    
    // 重複削除
    d_list.erase(unique(d_list.begin(), d_list.end()), d_list.end());
    
    cout << d_list.size() << endl;
}
