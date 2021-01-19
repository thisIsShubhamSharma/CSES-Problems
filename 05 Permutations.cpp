#include <bits/stdc++.h>
using namespace std;

#define ll long long
// Differece between two even or two odd number is always greater than 1
int main()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    // If even
    if (n % 2 == 0)
    {
        // print all even till n
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";

        // print all odd till n
        for (int i = 1; i < n; i += 2)
            cout << i << " ";
    }
    // if odd
    else
    {
        // print all the even backwards from n
        for (int i = n - 1; i > 0; i -= 2)
            cout << i << " ";
        // print all the old from n backwards
        for (int i = n; i > 0; i -= 2)
            cout << i << " ";
    }
}