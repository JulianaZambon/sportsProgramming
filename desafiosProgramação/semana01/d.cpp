#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll movimentos = 0;

    for (ll i = 1; i < n; i++) /* a partir do segundo elem */
    {
        if (v[i] < v[i - 1]) /* verifica se o elemento atual eh menor que o antecessor */
        {
            movimentos += v[i - 1] - v[i]; /* soma a diferenca entre os dois para o min de mov */
            v[i] = v[i - 1];
        }
    }

    cout << movimentos << endl;

    return 0;
}