#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "ACEBDFCEGDFAEGBFACGBD";
    if (t.find(s) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
