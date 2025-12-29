#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string S, tmp = "";

    for (int i = 0; i < N; i++) {
        
        cin >> S;
        
        if (i != N-1 && S == "sweet" && tmp == "sweet") {
            cout << "No" << endl;
            return 0;
        }

        tmp = S;
        
    }

    cout << "Yes" << endl;
}