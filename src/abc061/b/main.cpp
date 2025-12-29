#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int a, b;
    vector<int> array(100);

    for (int i = 0; i < N; i++) {
        int cnt = 0;
        
        for (int j = 0; j < M*2; j++) {
            // 道路の数分、aとbに入力
            cin >> array.at(j);
            
            // 同じ数がそれぞれ何個あるか 
            if (array.at(j) == i + 1) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
