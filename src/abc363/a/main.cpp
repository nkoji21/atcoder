#include <bits/stdc++.h>
using namespace std;

int main() {
    int R;
    cin >> R;
    
    if (R >= 1 && R <= 99) {
        cout << 100-R << endl;
    } else if (R >= 100 && R <= 199) {
        cout << 200-R << endl;
    } else if (R >= 200 && R <= 299) {
        cout << 300-R << endl;
    }
}