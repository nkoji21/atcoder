#include <bits/stdc++.h>
using namespace std;

int main() {
    
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    
    double ans = 0;
    
    if (x <= a) {
        ans = 1;
    } else if (x <= b) {
        ans = (double)c / (double)(b - a);
    } else {
        ans = 0;
    }
    
    cout << fixed << setprecision(12);
    cout << ans << endl;
}