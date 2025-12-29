#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<string> grid(n, string(n, '.'));

    for (int start = 0; start < n; start++)
    {
        int end = n - 1 - start;
        if (start > end)
            continue;
        char c = '#';
        if (start % 2)
            c = '.';

        for (int i = start; i <= end; i++)
            for (int j = start; j <= end; j++)
                grid[i][j] = c;
    }

    for (int i = 0; i < n; i++)
        cout << grid[i] << endl;
}
