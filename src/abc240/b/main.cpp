#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    set<int> st;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        st.insert(value);
    }
    
    cout << st.size() << endl;
}