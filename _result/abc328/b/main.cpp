#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int a, int b) {
    string s = to_string(a) + to_string(b);
    set<char> st;
    for (char c : s) {
        st.insert(c);
    }
    
    return st.size() == 1;
}

int main() {
    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int d;
        cin >> d;
        
        for (int j = 1; j <= d; j++) {
            if (check(i, j)) cnt++;
        }
    }
    cout << cnt << endl;
}