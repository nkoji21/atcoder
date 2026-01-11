#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M;
    cin >> M;

    vector<int> a;

    for (int i = 10; i >= 0; i--)
    {
        int x = 1;
        for (int j = 0; j < i; j++)
            x *= 3;

        while (x <= M)
        {
            M -= x;
            a.push_back(i);
        }
    }

    cout << a.size() << endl;
    for (int x : a)
        cout << x << ' ';
}