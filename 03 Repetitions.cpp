#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    int ans = 0, c = 0;
    char l = 'A';
    for (char d : s)
    {
        if (d == l)
        {
            ++c;
            ans = max(c, ans);
        }
        else
        {
            l = d;
            c = 1;
        }
    }
    cout << ans;
}