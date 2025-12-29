#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    int cnt = 0;

    for (int i = 0; i < (int)a.size() - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            int tmp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = tmp;
            cnt++;
        }
    }

    if (cnt == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
