#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        
        if (x >= a[i]) {
            x -= a[i];
            cnt++;
        } else {
            break;
        }
    }
    
    if (x != 0 && cnt == N) {
        cnt--;
    }

    cout << cnt << endl;
}
