#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_set<int> excluded;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        excluded.insert(x);
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (excluded.find(i) == excluded.end())
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (size_t i = 0; i < ans.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;
}
