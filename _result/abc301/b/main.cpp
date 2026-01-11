#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> vec;
    for (int i = 0; i < n-1; i++) {
        vec.push_back(a[i]);
        if (abs(a[i] - a[i+1]) != 1) {
            if (a[i] < a[i+1]) {
                for (int j = a[i] + 1; j <= a[i+1] - 1; j++) {
                    vec.push_back(j);
                }
            } else if (a[i] > a[i+1]) {
                for (int j = a[i] - 1; j >= a[i+1] + 1; j--) {
                    vec.push_back(j);
                }
            }
        }
    }
    vec.push_back(a[a.size() - 1]);
    
    for (int x : vec) {
        cout << x << ' ';
    }
}