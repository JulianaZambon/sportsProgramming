#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll m;
    string S, T;
    cin >> S >> T;

    m = 2;

    if (S == T)
    {
        cout << "Yes" << endl;
        return 0;
    }

    while (S != T && m--)
    {
        S = S.back() + S.substr(0, S.size() - 1); // rotação do S
    }

    if (S == T)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
