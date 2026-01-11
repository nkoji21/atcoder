#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a_list(N); // N個の要素数のデータ列を作成
    
    // 入力を配列に格納
    for (int i = 0; i < N; i++) {
        cin >> a_list.at(i);
    }

    int count = 0;
    int currentButton = a_list.at(0); // ボタン1
    
    for (int i = 0; i < N; i++) {
        count++;

        if (currentButton == 2) {
            cout << count << endl;
            return 0;
        }
        
        currentButton = a_list.at(currentButton - 1);
    }
    
    cout << -1 << endl;
}