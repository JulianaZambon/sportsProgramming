#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t, a, b, c;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        if ((a + b) >= 10 || (a + c) >= 10 || (b + c) >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}