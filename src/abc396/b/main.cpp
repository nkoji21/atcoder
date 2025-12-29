#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int Q;
    cin >> Q;
    vector<int> cards(100);
    for (int i = 0; i < Q; i++)
    {
        int q;
        cin >> q;

        if (q == 2)
        {
            cout << cards.back() << endl;
            cards.pop_back();
        }
        else
        {
            int n;
            cin >> n;
            cards.push_back(n);
        }
    }
}
