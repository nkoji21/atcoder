#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    set<string> st;
    
    for (int i = 0; i < (int)s.size(); i++) {
        for (int j = 1; j+i <= (int)s.size(); j++) {
            st.insert(s.substr(i, j));
        }
    }
    
    cout << st.size() << endl;
}