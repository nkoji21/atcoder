#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    
    x--;
    y--;
    
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }
    
    string t;
    cin >> t;

    int cnt = 0;

    for (int i = 0; i < (int)t.size(); i++) {
        if (t[i] == 'U' && s[x-1][y] != '#') {
            x--;
        }
        
        if (t[i] == 'D' && s[x+1][y] != '#') {
            x++;
        }
        
        if (t[i] == 'L' && s[x][y-1] != '#') {
            y--;
        }
        
        if (t[i] == 'R' && s[x][y+1] != '#') {
            y++;
        }
        
        if (s[x][y] == '@') {
            cnt++;
            s[x][y] = '.';
        }
    }
    
    cout << x+1 << ' ' << y+1 << ' ' << cnt << endl;
}