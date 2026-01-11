#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    set<int> st;

    for (int i = 0; i < (int)s.size(); i++) {
        int k = (t[i] - s[i] + 26) % 26;
        st.insert(k);
    }
    
    if (st.size() == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}